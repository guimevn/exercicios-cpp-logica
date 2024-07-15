// faça um programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numero;

    std::cout << "O numero informado foi " << numero << std::endl;
}