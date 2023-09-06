#include<iostream>
#include<cmath> //Para usar as funções pow() e sqrt()
int main()
{
    //a
    double a, b, c, x, delta, x1, x2;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de c: ";
    std::cin >> c;
    
    delta = pow(b, 2) - (4*a*c);

    std::cout << "O polinomio possui " << 
    (delta > 0 ? "duas raizes": 
    (delta == 0 ? "uma raiz": 
    "nenhuma raiz")) << std::endl;

    x1 = delta >= 0 ? (-b + sqrt(delta)) / (2*a) : 0;
    x2 = delta >= 0 ? (-b - sqrt(delta)) / (2*a) : 0;

    delta > 0 ? (std::cout << "A raizes sao: " << x1 << " e " << x2 << std::endl) : 
    (delta == 0 ? (std::cout << "A raiz e: " << x1 << std::endl):
    (std::cout << "Nao tem nenhuma raiz" << std::endl));
   
    //b
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Valor de p(x) = a*(x^2) + b*x + c: " << (a*pow(x,2) + b*x + c);
    return 0;
}