// source

#include "hypMod.hpp"
#include "hyp.hpp"
#include <random>
#include <ctime>

int hypotenuseMod(int a, int b){
    int hyp = hypotenuse(a, b);

    static std::mt19937 gen(static_cast<unsigned>(std::time(nullptr)));

    std::uniform_int_distribution<int> ch(0, 1);
    if (ch(gen) == 1) {
        std::uniform_int_distribution<int> add(1, 100);
        hyp += add(gen);
    }

    return hyp;
}