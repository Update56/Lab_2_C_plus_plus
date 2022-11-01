#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class cpu
{
private:
	int amount_core;
	double clock_rate;
	int power;
	string model;
	string soket;
public:
	cpu(int amount_core, double clock_rate, int power, string model, string soket);
	cpu(int amount_core);
	cpu();
	~cpu();
	void input();
	void output();
	void set_amount_core(int amount_core);
	void set_clock_rate(double clock_rate);
	void set_power(int power);
	void set_model(string model);
	void set_soket(string soket);
	int get_amount_core();
	double get_clock_rate();
	int get_power();
	string get_model();
	string get_soket();
};