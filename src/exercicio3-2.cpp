#include<iostream>
#include<climits>
int main()
{
    //a
    int a;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> a;
    // Os limites de menor e maior valor de short int são respectivamente -32768 e 32767

    //b
    std::cout << short(a) << " - " << (a > SHRT_MAX || a < SHRT_MIN ? 
    "e maior que um short int":
    "este valor pertence ao intervalo dos short int");
    return 0;
}