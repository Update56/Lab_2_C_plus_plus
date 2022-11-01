#pragma once
#include <iostream>
#include <string.h>

#include "psu.h"
#include "ram.h"
#include "gpu.h"
#include "cpu.h"
#include "motherboard.h"

using namespace std;

class pc_builder
{
private:
	motherboard Motherboard;
	cpu Cpu;
	gpu Gpu;
	ram Ram;
	psu Psu;
	int scoring(int var, double amount);
public:
	pc_builder(motherboard Motherboard, cpu Cpu, gpu Gpu, ram Ram, psu Psu);
	pc_builder(motherboard Motherboard);
	pc_builder();
	~pc_builder();
	void input();
	void output();
	void score();
	void recom();
	void compatibility_check();
};

