#pragma once
#include"Unit.h"
class Drones :public Unit {
public:
	Drones(string i, string t, double j, double h, double p, int a) :Unit(i, t, j, h, p, a) {
	}
}
