#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class psu
{
private:
	int power;
	string model;

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
};

