#include "psu.h"

psu::psu(int power, string model)
{
	this->power = power;
	this->model = model;
}

psu::psu(int power)
{
	this->power;
}
psu::psu() {
}

psu::~psu() {
}
void psu::input()
{
	cout << "Введите модель и мощность блока питания(через \"Enter\")\n";
	cin >> model;
	cin >> power;
}
void psu::output()
{
	cout << "\nБлок питания:\n\t-модель: " << model;
	cout << "\n\t-мощность: " << power;
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

