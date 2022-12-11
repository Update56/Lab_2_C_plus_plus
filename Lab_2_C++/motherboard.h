#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class motherboard
{
private:
	string model;
	string soket;
	string type_memory;
	int price;
public:
	motherboard(string model, string soket, string type_memory);
	motherboard(string soket);
	motherboard();
	~motherboard();
	void input();
	void output();
	void set_model(string model);
	void set_soket(string soket);
	void set_type_memory(string type_memory);
	string get_model();
	string get_soket();
	string get_type_memory();
	friend int get_price(motherboard a);
	friend int get_price(motherboard a)
	{
		return a.price;
	}
	void null_model();
};