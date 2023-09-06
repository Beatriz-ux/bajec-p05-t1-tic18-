#include<iostream>
#include<cstdlib> //Para usar a função abs()

int main()
{
    //a
    int a, b, c;

    //b
    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;
    std::cout << "Digite o segundo numero: ";
    std::cin >> b;

    //c
    c = a + b;
    std::cout << "(a + b) em hexadecimal: "<< std::hex << c << std::dec << std::endl;

    //d
    c = a * b;
    std::cout << "(a * b) em octal: "<< std::oct << c << std::dec << std::endl;

    //e
    c = a - b;
    std::cout << "Valor absoluto de (a - b): " << (c<0 ? -c : c) << std::endl;
    
    //f
    c = abs(a - b);
    std::cout << "Valor absoluto de (a - b): " << c << std::endl;
    
    //g 
    c = (b != 0 ? a/b : 0);
    std::cout << (b == 0 ? "A variavel B tem valor 0 e nao pode ser um divisor" : "") << std::endl;

    //h
    std::cout << "A divisao a/b e " << (b != 0? (a%b == 0 ? "exata" : "nao exata"): "invalida") << std::endl;
    std::cout << "c = " << c;
    return 0;
}