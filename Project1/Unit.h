#pragma once
#include<string>
using namespace std;
class Unit {
private:
	string ID, type;
	double Tj, Health, Power;
	int AttackCap;
public:
	Unit(string i, string t, double j, double h, double p, int a);
	virtual void Attack(Unit* p);


};
