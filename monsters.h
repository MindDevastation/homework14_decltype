#ifndef MONSTERS_H
#define MONSTERS_H

#include <QString>

class monsters
{
    QString _Name;
    double _HP;
    decltype(_HP) _MP;
    decltype(_HP) _Damage;
    int _Armour;
    decltype(_Armour) _Speed;
public:
    monsters();

    monsters(QString Name, double HP, double MP, double Damage, int Armour, int Speed);

    auto getName() {return _Name;}
    auto getHP() {return _HP;}
    auto getMP() {return _MP;}
    auto getDamage() {return _Damage;}
    auto getArmour() {return _Armour;}
    decltype (auto) getSpeed() {return _Speed;}
};

#endif // MONSTERS_H
