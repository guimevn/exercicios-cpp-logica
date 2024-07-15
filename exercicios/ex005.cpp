// faça um programa que converta metros para centímetros.
#include <iostream>

int main() {
    float metros, centimetros;

    std::cout << "m: ";
    std::cin >> metros;

    centimetros = metros * 100;

    std::cout << "cm: " << centimetros << std::endl;
}