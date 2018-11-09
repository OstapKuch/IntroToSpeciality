#include <iostream>
#include "Chainsaw.h"

int main() {

    Chainsaw Makita("Makita", 2000, 400, 6, 8, 5, "Makita_2");
    Chainsaw Keyi("Keyi", 1800, 100, 1, 9, 6, "Keyi_453");
    Chainsaw Viper("Viper", 2500, 450, 4, 7, 9, "Viper_326");
    Makita.getClass();
    Keyi.getClass();
    Viper.getClass();

}