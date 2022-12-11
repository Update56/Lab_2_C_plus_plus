#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class ram
{
private:
	int clock_rate;
	int memory_size;
	string model;
	string type_memory;
	int price;

public:
	ram(int clock_rate, int memory_size, string model, string type_memory);
	ram(int memory_size);
	ram();
	~ram();
	void input();
	void output();
	void set_clock_rate(int clock_rate);
	void set_memory_size(int memory_size);
	void set_model(string model);
	void set_type_memory(string type_memory);
	int get_clock_rate();
	int get_memory_size();
	string get_model();
	string get_type_memory();
	friend int get_price(ram a);
	friend int get_price(ram a)
	{
		return a.price;
	}
	void null_model();
};