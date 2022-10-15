#include "weapon.h"

int main()
{
    cout << "~~~~~~~~~~First Task~~~~~~~~~~~" << "\n" << endl;
    cout << "---------------ENUM----------------" << endl;
    Weapon weapon1;
    if (weapon1.getType() == WEAPON_TYPE::ONEHANDED){ cout << "Type of your weapon: OneHanded" <<  "\n" << endl; };

    cout << "---------------Structures----------------" << endl;
    Player Player1 = { 111111, "Cosmo", "CosmoWins" };
    printPlayer(Player1);

    cout << "---------------inheritance---------------" << endl;
    MagicWeapon wand = {"Wand", 3, 1, ONEHANDED, 2};
    cout << wand.getAdditionalDamage() << "\n" << endl;

    cout << "~~~~~~~~~~Second Task~~~~~~~~~~~" << "\n" << endl;
    cout << "-----------Print func----------" << endl;
    weapon1.Print();
    cout << "-----------Get Additional damage----------\n" <<"Wand damage = " <<wand.getDamage() << endl;

    cout << "-----------------Operators-----------------\n" << (wand > weapon1) << "\n" << (wand < weapon1) << endl;
    system("Pause");
}