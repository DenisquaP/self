#pragma once

#include <iostream>
using namespace std;
#define maxWeight 15

class Weapon {
public:
	string name;

	int damage;
	int weight;

	Weapon(string _name, int _damage, int _weight);

	Weapon();

	void max();

	int  sumWeight(Weapon* w);

	int sumWeight(int _weight);

	~Weapon();
};

