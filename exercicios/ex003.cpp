// faça um programa que peça dois números e imprima a soma.
#include <iostream>

int main() {
    int x;
    int y;
    int soma;

    std::cout << "Digite o primeiro numero: " << std::endl;
    std::cin >> x;

    std::cout << "Digite o segundo numero: " << std::endl;
    std::cin >> y;

    soma = x + y;
    std::cout << "Soma dos dois numeros: " << soma << std::endl;

    return 0;
}