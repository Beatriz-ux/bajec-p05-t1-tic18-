#include<iostream>
#include<cmath> //Para usar as funções pow() e sqrt()
int main()
{
    //a
    double x, y, z;
    
    //b
    std::cout << "Digite um numero de ponto flutuante: ";
    std::cin >> x;
    std::cout << "Digite um segundo numero de ponto flutuante: ";
    std::cin >> y;
    
    //c
    std::cout << "A coordenada se encontra na " << 
    (y > 5*x+2 ? "esquerda" : 
    (y == 5*x+2 ? "curva" : 
    "direita")) << std::endl;
    
    //d
    z = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << z << std::endl;

    //e
    z = x * y;
    int i;

    for(i = 0; z >= 10; i++)
    {   
        z = z / 10;
    }

    std::cout << "Variavel z em notacao cientifica: " << z << " * 10^" << i <<std::endl; 
    return 0;
}