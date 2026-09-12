// Main

#include <iostream>
#include "hyp.hpp"
#include "hypMod.hpp"

int main() {
    int a, b;
    
    std::cout << "Leg a:";
    std::cin >> a;

    std::cout << "Leg b:";
    std::cin >> b; 
    
    double result = hypotenuse(a, b);

    std::cout << "DEFAULT > Result: " << result << '\n';

    result = hypotenuseMod(a, b);
    std::cout << "MODDED > Result: " << result << '\n';
    return 0;
}