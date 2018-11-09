#include <iostream>
#include "Chainsaw.h"


Chainsaw::Chainsaw() {

    this->name = "Name";

}
Chainsaw::Chainsaw(string Name, int Power, int Turns, int prot_1, int prot_2, int pub_1, string pub_2) {

    name = Name;
    power = Power;
    turns = Turns;
    protected_1 = prot_1;
    protected_2 = prot_2;
    public_1 = pub_1;
    public_2 = pub_2;

}

Chainsaw::~Chainsaw() {

    std::cout << "This is destructor" << endl;

}
void Chainsaw::getClass() {

    std::cout << "Name: " << name << " Power: " << power << " Turns: " << turns << " Public_1: " << public_1 << " Public_2: " << public_2 << " Protected_1: " << protected_1 << " Protected_2: " << protected_2 << std::endl;

}

string Chainsaw::getName() {

    return this->name;

}
int Chainsaw::getPower()  {

    return this->power;

}
int Chainsaw::getTurns()  {

    return this->turns;

}
