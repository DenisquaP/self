#include "Weapon.h"

int MyMath::counter = 0;

int main()
{
	Weapon knife;
	cout << knife.getWeight() << endl;
	
	knife.setDamage(200);
	cout << knife.getDamage() << endl;
	Characteristic m1;
	m1.setStrong(10);
	cout << m1.getDamage(&knife) << endl;
	cout << "------------------Static functions--------------------------" << endl;
    cout << "Result: " << MyMath::Add(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Sub(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Mult(8, 4) << " Count: " << MyMath::counter << endl << "Result: " << MyMath::Div(8, 4) << " Count: " << MyMath::counter << endl << endl;
	system("Pause");
}
