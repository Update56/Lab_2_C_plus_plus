#include "pc_builder.h"

int pc_builder::scoring(int var, double amount)
{
	int numbers[] = {0, 0 , 0};
	switch (var)
	{
	case 0: 
		numbers[0] = 4; numbers[1] = 8; numbers[2] = 16;
		break;
	case 1:
		numbers[0] = 0; numbers[1] = 5; numbers[2] = 57;
		break;
	case 2: 
		numbers[0] = 12; numbers[1] = 50; numbers[2] = 105;
		break;
	default:
		break;
	}

	if (amount > numbers[0] && amount <= numbers[1])
		return 1;
	else if (amount > numbers[1] && amount <= numbers[2])
		return 2;
	else if (amount > numbers[2])
		return 3;
	return 0;
}

pc_builder::pc_builder(motherboard Motherboard, cpu Cpu, gpu Gpu, ram Ram, psu Psu)
{
	this->Motherboard = Motherboard;
	this->Cpu = Cpu;
	this->Gpu = Gpu;
	this->Ram = Ram;
	this->Psu = Psu;
}

pc_builder::pc_builder(motherboard Motherboard)
{
	this->Motherboard = Motherboard;
}

pc_builder::pc_builder(){
}

pc_builder::~pc_builder(){
	printf("Экзепляр класса удалён\n");
}

void pc_builder::input()
{
	Motherboard.input();
	Cpu.input();
	Gpu.input();
	Ram.input();
	Psu.input();
}

void pc_builder::output()
{
	Motherboard.output();
	Cpu.output();
	Gpu.output();
	Ram.output();
	Psu.output();
}

void pc_builder::score()
{
	int total_score = 0;

	double score_cpu = Cpu.get_clock_rate() * Cpu.get_amount_core();
	double score_gpu = (Gpu.get_clock_rate() / 1000.) * Gpu.get_memory_size() * (Gpu.get_bandwidt() / 100.);
	double score_ram = (Ram.get_clock_rate() / 1000.) * Ram.get_memory_size();

	total_score += scoring(0, score_cpu);
	total_score += scoring(1, score_gpu);
	total_score += scoring(2, score_ram);

	if (total_score <= 2)
		printf("Это ОЧЕНЬ слабый ПК");
	else if (total_score > 2 && total_score < 6)
		printf("Это слабый ПК");
	else if (total_score >= 6 && total_score < 9)
		printf("Это хороший, мощный ПК");
	else if (total_score >= 9)
		printf("Это мощнейший ПК");

}

void pc_builder::recom()
{
	double score_cpu = Cpu.get_clock_rate() * Cpu.get_amount_core();
	double score_gpu = (Gpu.get_clock_rate() / 1000.) * Gpu.get_memory_size() * (Gpu.get_bandwidt() / 100.);
	double score_ram = (Ram.get_clock_rate() / 1000.) * Ram.get_memory_size();

	int f_score_cpu = scoring(0, score_cpu);
	int f_score_gpu = scoring(1, score_gpu);
	int f_score_ram = scoring(2, score_ram);

	if ((f_score_cpu > f_score_gpu) && (f_score_cpu > f_score_ram))
	{
		printf("Процессор слишком мощный. Рекомендуется выбрать другой или более мощные видеокарту и ОЗУ");
		return;
	}

	if ((f_score_cpu < f_score_gpu) && (f_score_gpu > f_score_ram))
	{
		printf("Видеокарта слишком мощная. Рекомендуется выбрать другою или более мощные процессор и ОЗУ");
		return;
	}

	if ((f_score_cpu < f_score_ram) && (f_score_gpu < f_score_ram))
	{
		printf("Слишком много памяти. Рекомендуется выбрать другою или более мощные процессор и видеокарту");
		return;
	}

	printf("Ваша сборка сбалансирована");
	return;
}

void pc_builder::compatibility_check()
{
	setlocale(LC_ALL, "Rus");
	Motherboard.get_soket() == Cpu.get_soket() ? printf("Процессор и мат.плата совместимы\n") : printf("Сокеты процессора и платы разные!\n");
	Motherboard.get_type_memory() == Ram.get_type_memory() ? printf("Мат. плата и ОЗУ совместимы\n") : printf("Тип пямяти мат.платы и ОЗУ разные!\n");
	(Cpu.get_power() + Gpu.get_power() ) < Psu.get_power() ? printf("Мощности БП хватает (в запасе примерно %i ватт)\n", Psu.get_power() - (Cpu.get_power() + Gpu.get_power())) : printf("Слабый БП, не хватает %i ватт\n", (Cpu.get_power() + Gpu.get_power()) - Psu.get_power());
}
