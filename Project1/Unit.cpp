#include"Unit.h"

Unit::Unit(string i, string t, double j, double h, double p, int a) {
	ID = i;
	type = t;
	Tj = j;
	Health = h;
	Power = p;
	AttackCap = a;
}
void Unit::Attack(Unit* p) {
	double damage = (Power * Health / 100) / sqrt(p->Health);
	p->Health -= damage;
}