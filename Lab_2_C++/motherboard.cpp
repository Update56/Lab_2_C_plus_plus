#include "motherboard.h"

motherboard::motherboard(string model, string soket, string type_memory) 
{
	this->model = model;
	this->soket = soket;
	this->type_memory = type_memory;
}
motherboard::motherboard(string soket)
{
	this->soket = soket;
}

motherboard::motherboard(){
}

motherboard::~motherboard(){
}

void motherboard::input()
{
	cout << "Введите модель, сокет и тип памяти мат. платы (через \"Enter\")\n";
	cin >> model;
	cin >> soket;
	cin >> type_memory;
}

void motherboard::output()
{
	cout << "\nМатеринская плата\n\t-модель: " << model;
	cout << "\n\t-сокет: " << soket;
	cout << "\n\t-тип памяти: " << type_memory;
}

void motherboard::set_model(string model)
{
	this->model = model;
}

void motherboard::set_soket(string soket)
{
	this->soket = soket;
}

void motherboard::set_type_memory(string type_memory)
{
	this->type_memory = type_memory;
}

string motherboard::get_model()
{
	return model;
}

string motherboard::get_soket()
{
	return soket;
}

string motherboard::get_type_memory()
{
	return type_memory;
}
