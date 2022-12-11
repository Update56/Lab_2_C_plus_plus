#include "cpu.h"

cpu::cpu(int amount_core, double clock_rate, int power, string model, string soket)
{
	this->amount_core = amount_core;
	this->clock_rate = clock_rate;
	this->power = power;
	this->model = model;
	this->soket = soket;
}

cpu::cpu(int amount_core)
{
	this->amount_core = amount_core;
}

cpu::cpu() {
}

cpu::~cpu(){
}

void cpu::input()
{
	cout << "Введите модель, сокет, кол-во ядер, частоту, энергопротребление и цену процессора  (через \"Enter\")\n";
	cin >> model;
	cin >> soket;
	cin >> amount_core;
	cin >> clock_rate;
	cin >> power;
	cin >> price;
}

void cpu::output()
{
	cout << "\nПроцессор\n\t-модель: " << model;
	cout << "\n\t-сокет: " << soket;
	cout << "\n\t-кол-во ядер: " << amount_core;
	cout << "\n\t-частота: " << clock_rate;
	cout << "\n\t-энергопотребление: " << power;
	cout << "\n\t-цена: " << price;
}

void cpu::set_amount_core(int amount_core)
{
	this->amount_core = amount_core;
}

void cpu::set_clock_rate(double clock_rate)
{
	this->clock_rate = clock_rate;
}

void cpu::set_power(int power)
{
	this->power = power;
}

void cpu::set_model(string model)
{
	this->model = model;
}

void cpu::set_soket(string soket)
{
	this->soket = soket;
}

int cpu::get_amount_core()
{
	return amount_core;
}

double cpu::get_clock_rate()
{
	return clock_rate;
}

int cpu::get_power()
{
	return power;
}

string cpu::get_model()
{
	return model;
}

string cpu::get_soket()
{
	return soket;
}

double* cpu::flops()
{
	double* flops = new double;
	*flops = 64 * get_amount_core() * get_clock_rate();
	return flops;
}

cpu cpu::operator+(double a) //перегрузка +
{
	cpu b;
	b.clock_rate = this->amount_core + a;
	return b;
}

cpu& cpu::operator++() //перегрузка ++
{
	this->clock_rate++;
	return *this;
}

cpu cpu::operator++(int unused) //++ перегрузка
{
	cpu a = *this;
	++*this;
	return a;
}

void cpu::null_model()
{
	if (model == "-")
	{
		throw "Нет введена модель ЦПУ";
	}
}
