// faça um programa que peça as 4 notas bimestrais e mostre a média.
#include <iostream>

int main() {
    double nota1, nota2, nota3, nota4, media;

    std::cout << "Digite a primeira nota: " << std::endl;
    std::cin >> nota1;

    std::cout << "Digite a segunda nota: " << std::endl;
    std::cin >> nota2;

    std::cout << "Digite a terceira nota: " << std::endl;
    std::cin >> nota3;

    std::cout << "Digite a quarta nota: " << std::endl;
    std::cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    std::cout << "A sua media e: " << media << std::endl;
}