#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class psu
{
private:
	int power;
	string model;
	int price;
public:
	psu(int power, string model);
	psu(int power);
	psu();
	~psu();
	void input();
	void output();
	int get_power();
	string get_model();
	void set_power(int power);
	void set_model(string model);
	friend int get_price(psu a);
	friend int get_price(psu a)
	{
		return a.price;
	}
	void null_model();
};

