#include "Weapon.h"

int main()
{
	Weapon weapon1("knife", 12, 1);
	Weapon saw;
	cout << weapon1.name << " " << weapon1.damage << " " << weapon1.weight << endl;
	cout << saw.name << " " << saw.damage << " " << saw.weight << endl;

	Weapon weapon2("jigsaw", 28, 19);
	cout << weapon2.name << " " << weapon2.damage << " " << weapon2.weight << endl;
	Weapon* newpointer = new Weapon("NewWeapon", 12, 8);
	cout << newpointer->name << " " << newpointer->damage << " " << newpointer->weight << endl;
	delete newpointer;

	Weapon weapon3("knife", 12, 1);
	weapon1.max();

	cout << "Weight sum = " << weapon1.sumWeight(&saw) << endl;
}
	