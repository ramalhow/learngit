#pragma once
#include <iostream>

int dobado(int i) {
    return (~i)+1;  
}

void big_feature() {
    std::cout << "this is peak coding\n";
    
    int input = -1;
    std::cout << "choose a number: ";
    std::cin >> input;

    std::cout << "the dobado result from " << input << " is: " << dobado(input);
}