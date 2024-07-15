// faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
#include <iostream>
#include <cmath>

int main(){
    double area, lado, dobro;

    std::cout << "Digite o lado do quadrado: ";
    std::cin >> lado;

    area = std::pow(lado, 2);
    dobro = area * 2;

    std::cout << "A area do quadrado em dobro: " << dobro;

    return 0;
}