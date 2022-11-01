#include "gpu.h"

gpu::gpu(int clock_rate, int bandwidth, int memory_size, int power, string model)
{
	this->clock_rate = clock_rate;
	this->bandwidth = bandwidth;
	this->memory_size = memory_size;
	this->power = power;
	this->model = model;
}

gpu::gpu(int clock_rate)
{
	this->clock_rate = clock_rate;
}

gpu::gpu() {
}

gpu::~gpu(){
}

void gpu::input()
{
	cout << "������� ������, �������, ���������� ����������� ������, ����� ������ � ������������������ ���������� (����� \"Enter\")\n";
	cin >> model;
	cin >> clock_rate;
	cin >> bandwidth;
	cin >> memory_size;
	cin >> power;
}

void gpu::output()
{
	cout << "\n����������\n\t-������: " << model;
	cout << "\n\t-�������: " << clock_rate;
	cout << "\n\t-���������� ����������� ������: " << bandwidth;
	cout << "\n\t-����� ������: " << memory_size;
	cout << "\n\t-�����������������: " << power;
}

void gpu::set_clock_rate(int clock_rate)
{
	this->clock_rate = clock_rate;
}

void gpu::set_memory_size(int memory_size)
{
	this->memory_size = memory_size;
}

void gpu::set_model(string model)
{
	this->model = model;
}

void gpu::set_power(int power)
{
	this->power = power;
}

void gpu::set_bandwidth(int bandwidth)
{
	this->bandwidth = bandwidth;
}

int gpu::get_clock_rate()
{
	return clock_rate;
}

int gpu::get_memory_size()
{
	return memory_size;
}

string gpu::get_model()
{
	return model;
}

int gpu::get_power()
{
	return power;
}

int gpu::get_bandwidt()
{
	return bandwidth;
}

