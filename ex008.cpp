// faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#include <iostream>

int main() {
    double salHr, numHr, salMes;

    std::cout << "Digite quanto voce ganha por hora: ";
    std::cin >> salHr;

    std::cout << "Digite o numero de horas trabalhada no mes: ";
    std::cin >> numHr;

    salMes = salHr * numHr;

    std::cout << "O seu salario e: R$" << salMes;
}