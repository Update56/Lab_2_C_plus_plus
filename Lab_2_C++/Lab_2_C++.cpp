#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "pc_builder.h"

void static_variable()
{
	pc_builder my_pc;
	int choice;
	my_pc.input();
	do
	{
		printf("\n1. Список комплектующих\n2. Проверить совместимость\n3. Оценка сборки\n4. Рекомендации\n5. Ввести новые комплектующие\n6. Выход\n");
		scanf("%i", &choice);
		switch (choice)
		{
		case 1:
			my_pc.output();
			break;
		case 2:
			my_pc.compatibility_check();
			break;
		case 3:
			my_pc.score();
			break;
		case 4:
			my_pc.recom();
			break;
		case 5:
			my_pc.input();
			break;
		case 6:
			break;
		default:
			printf("Неверный пункт меню");
			break;
		}

	} while (choice != 6);

	return;
}

void dynamic_variable() {
	int choice;
	pc_builder* my_pc = new pc_builder;
	my_pc->input();
	do
	{
		printf("\n1. Список комплектующих\n2. Проверить совместимость\n3. Оценка сборки\n4. Рекомендации\n5. Ввести новые комплектующие\n6. Выход\n");
		scanf("%i", &choice);
		switch (choice)
		{
		case 1:
			my_pc->output();
			break;
		case 2:
			my_pc->compatibility_check();
			break;
		case 3:
			my_pc->score();
			break;
		case 4:
			my_pc->recom();
			break;
		case 5:
			my_pc->input();
			break;
		case 6:
			delete my_pc;
			break;
		default:
			printf("Неверный пункт меню");
			break;
		}

	} while (choice != 6);

	return;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int choice;
	printf("Выберите режим работы программы:\n");
	printf("1. Работа со статическими переменными\n2. Работа с динамическими переменными\n3. Выход из программы\n");
	scanf("%i", &choice);
		switch (choice) 
		{
		case 1:
			static_variable();
			break;
		case 2:
			dynamic_variable();
			break;
		case 3: 
			return 0;
			break;
	default:
		printf("Неверный пункт меню\n");
		break;
		}
}