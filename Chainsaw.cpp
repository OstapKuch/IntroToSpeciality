#include <iostream>
#include "Chainsaw.h"


Chainsaw::Chainsaw() {
    this->name = "Name";
}

Chainsaw::Chainsaw(string name, int power, int turns, int protected_1, int protected_2, int public_1, string public_2) {
    this->name = name;
    this->power = power;
    this->turns = turns;
    this->protected_1 = protected_1;
    this->protected_2 = protected_2;
    this->public_1 = public_1;
    this->public_2 = public_2;
}

Chainsaw::~Chainsaw() {
    std::cout << "This is destructor" << endl;
}

void Chainsaw::getAllClassFields() {
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
