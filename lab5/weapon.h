#include <iostream>
using namespace std;
#define maxWeight 15

enum WEAPON_TYPE {

      ONEHANDED,
      TWOHANDED,
      BOW,
      CROSSBOW
            
};

struct Player {

    int id;

    string login;

    string password;

};

void printPlayer(Player& Player) {

    cout << "Name: " << Player.id << endl;

    cout << "Description: " << Player.login << endl;

    cout << "Price: " << Player.password << "\n" << endl;

}


class Weapon {
	string name;
	int damage;
	int weight;
    WEAPON_TYPE type_of_weapon;

public:
    Weapon(string name, int damage, int weight, WEAPON_TYPE type_of_weapon) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
        this->type_of_weapon = type_of_weapon;
    }

    Weapon(){ name = "Knife"; damage = 12; weight = 2; type_of_weapon = ONEHANDED; }

    void Print()
    {
        cout << "name " << this->name << "\n" << "damage " << this->damage << "\n" << "weight " << this->weight << "\n" << "weapon`s type " << this->type_of_weapon << endl; 
    }

    WEAPON_TYPE getType() { return type_of_weapon; }

    void setType(WEAPON_TYPE type_of_weapon) { this -> type_of_weapon = type_of_weapon; }

    string getName() { return this -> name;}

	virtual int getDamage(){return this->damage;}

	int getWeight(){return this->weight;}

	void setDamage(int damage){this->damage = damage;}

    bool operator > (Weapon &otherWeapon) {
            return this->getDamage() > otherWeapon.getDamage();
        }
    
    bool operator < (Weapon &otherWeapon) {
            return this->getDamage() < otherWeapon.getDamage();
        }

	~Weapon(){}
};


class MagicWeapon: public Weapon
{
    int additional_damage;

public:
    MagicWeapon(string name, int damage, int weight, WEAPON_TYPE type_of_weapon, int additional_damage ):Weapon(name, damage, weight, type_of_weapon)
    {
        this -> additional_damage = additional_damage;
    }
    MagicWeapon(){ "Magic_Wand"; 3; 1; 0; 1; }

    int getAdditionalDamage(){ return additional_damage; }

    int getDamage() override{
        return Weapon::getDamage() + getAdditionalDamage();
    }
};
