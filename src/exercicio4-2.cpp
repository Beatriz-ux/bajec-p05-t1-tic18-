#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    //a)
    double a, b, c, x, delta, x1, x2;

    cout << "Digite os valores dos coeficientes a, b e c de um polinomio de segundo grau" << endl;
    cin >> a >> b >> c;

    delta = pow(b, 2) - (4 * a * c);

    delta < 0 ? cout << "O polinomio nao possui raizes reais" << endl : delta == 0 ? cout << "O polinomio possui uma raiz real" << endl : cout << "O polinomio possui duas raizes reais" << endl;

    delta >= 0 ? x1 = (-b + sqrt(delta)) / (2 * a) : x1 = 0;
    delta >= 0 ? x2 = (-b - sqrt(delta)) / (2 * a) : x2 = 0;

    delta == 0 ?  cout << "A raiz do polinomio eh: " << x1 << endl : delta > 0 ?   cout << "As raizes do polinomio sao: " << x1 << " e " << x2 << endl : cout << "O polinomio nao possui raizes reais" << endl;

    //b)
    cout << "Digite um valor para x" << endl;
    cin >> x;

    cout << "O valor de p(x) eh: " << (a * pow(x, 2)) + (b * x) + c << endl;

    return 0;
}