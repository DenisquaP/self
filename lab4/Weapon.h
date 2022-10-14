#include <iostream>
using namespace std;
#define maxWeight 15

class Weapon {
	friend class Characteristic;
public:
	string name;

	int damage;
	int weight;

public:
	Weapon(string _name, int _damage, int _weight)
{
	name = _name;
	damage = _damage;
	weight = _weight;
}

	Weapon() : Weapon("saw", 20, 13) {}

	void max()
{
	if (weight >= maxWeight) {
		cout << "false" << endl;
	}
	else {
		cout << "true" << endl;
	}
}

	int  sumWeight(Weapon* w)
{
	return sumWeight(w->weight);
}

	int sumWeight(int _weight)
{
	return weight + _weight;
}

	int getDamage(){return this->damage;}

	int getWeight(){return this->weight;}

	void setDamage(int damage){this->damage = damage;}


	~Weapon(){cout << "Destructor called for Weapon " << name << endl;}
};


class Characteristic
{
	int strong;
public:
	void setStrong(int _strong){ this->strong = _strong; }
	int getDamage(Weapon* we){ return strong + we->damage; }

};

class MyMath
{
public:
	static int counter;
	static int Add(int a, int b){
	counter++;
	return a + b;
}
	static int Sub(int fir, int sec){
	counter++;
	return fir - sec;
}
	static int Mult(int fir, int sec){
	counter++;
	return fir * sec;
}
	static int Div(int fir, int sec){
	counter++;
	return fir / sec;
}
};
