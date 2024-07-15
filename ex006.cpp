// faça um programa que peça o raio de um círculo, calcule e mostre sua área.
#include <iostream>
#include <cmath>

int main() {
    double raio, area;
    const double PI = 3.14159;

    std::cout << "Raio do circulo: ";
    std::cin >> raio;

    area = PI * (std::pow(raio, 2));
    std::cout << "Area do circulo (m): " << area << std::endl;
}