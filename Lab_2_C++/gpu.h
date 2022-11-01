#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class gpu
{
private:
	int clock_rate;
	int bandwidth;
	int memory_size;
	int power;
	string model;
public:
	gpu(int clock_rate, int bandwidth, int memory_size, int power, string model);
	gpu(int clock_rate);
	gpu();
	~gpu();
	void input();
	void output();
	void set_clock_rate(int clock_rate);
	void set_memory_size(int memory_size);
	void set_model(string model);
	void set_power(int power);
	void set_bandwidth(int bandwidth);
	int get_clock_rate();
	int get_memory_size();
	string get_model();
	int get_power();
	int get_bandwidt();
};