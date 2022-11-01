#include "ram.h"

ram::ram(int clock_rate, int memory_size, string model, string type_memory)
{
	this->clock_rate = clock_rate;
	this->memory_size = memory_size;
	this->model = model;
	this->type_memory = type_memory;
}

ram::ram(int memory_saze)
{
	this->memory_size = memory_size;
}

ram::ram() {
};

ram::~ram() {
}
void ram::input()
{
	cout << "������� ������, ���, ������� � ����� ��� (����� \"Enter\")\n";
	cin >> model;
	cin >> type_memory;
	cin >> clock_rate;
	cin >> memory_size;
};

void ram::output()
{
	cout << "\n���\n\t-������: " << model;
	cout << "\n\t-��� ������: " << type_memory;
	cout << "\n\t - �������: " << clock_rate;
	cout << "\n\t-�����: " << memory_size;
}

void ram::set_clock_rate(int clock_rate)
{
	this->clock_rate = clock_rate;
}

void ram::set_memory_size(int memory_size)
{
	this->memory_size = memory_size;
}

void ram::set_model(string model)
{
	this->model = model;
}

void ram::set_type_memory(string type_memory)
{
	this->type_memory = type_memory;
}

int ram::get_clock_rate()
{
	return clock_rate;
}

int ram::get_memory_size()
{
	return memory_size;
}

string ram::get_model()
{
	return model;
}

string ram::get_type_memory()
{
	return type_memory;
}
