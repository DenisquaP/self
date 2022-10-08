#include "Weapon.h"

Weapon::Weapon(string _name, int _damage, int _weight)
{
	name = _name;
	damage = _damage;
	weight = _weight;
}

Weapon::Weapon() : Weapon("saw", 20, 13) {}

void Weapon::max()
{
	if (weight >= maxWeight) {
		cout << "false" << endl;
	}
	else {
		cout << "true" << endl;
	}
}

int Weapon::sumWeight(Weapon* w)
{
	return sumWeight(w->weight);
}

int Weapon::sumWeight(int _weight)
{
	return weight + _weight;
}

Weapon::~Weapon()
{
	cout << "Destructor called for Weapon " << name << endl;
}


