#include "psu.h"

psu::psu(int power, string model)
{
	this->power = power;
	this->model = model;
}

psu::psu(int power)
{
	this->power = power;
}
psu::psu() {
}

psu::~psu() {
}
void psu::input()
{
	cout << "Введите модель, мощность и цену блока питания(через \"Enter\")\n";
	cin >> this->model;
	cin >> power;
	cin >> price;
}
void psu::output()
{
	cout << "\nБлок питания:\n\t-модель: " << model;
	cout << "\n\t-мощность: " << power;
	cout << "\n\t-цена: " << price;
}

int psu::get_power()
{
	return power;
}

string psu::get_model()
{
	return model;
}

void psu::set_power(int power)
{
	this->power = power;
}

void psu::set_model(string model)
{
	this->model = model;
}

void psu::null_model()
{
	if (model == "-")
	{
		throw "Нет введена модель блока питания";
	}
}