#include "monsters.h"

monsters::monsters(){
    _Name = "NaN";
    _HP = 0;
    _MP = 0 ;
    _Damage = 0;
    _Armour = 0;
    _Speed = 0;
}

monsters::monsters(QString Name, double HP, double MP, double Damage, int Armour, int Speed){
    _Name = Name;
    _HP = HP;
    _MP = MP ;
    _Damage = Damage;
    _Armour = Armour;
    _Speed = Speed;
}


