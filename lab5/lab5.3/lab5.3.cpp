#include "weapon.h"

int main()
{
    cout << "---------------virtual func------------------\n";
    MagicWeapon wand = {"Wand", 3, 1, ONEHANDED, 2};
    //Weapon we1;    
    wand.attack();
    
    cout << "\n";
    OneTime weap1;
    weap1.attack();
    weap1.attack();

    cout << "------------------Template---------------\n"; 
    Hands <OneTime, int> playerHands(weap1, 3);
    playerHands.getLeftHandWeapon().attack();
    cout << playerHands.getRightHandWeapon() << endl;

    system("Pause");
}