#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int polinomio(void);

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    polinomio();
    return 0;

    double x, y, z;
    cout << "Digite os valores de x e y: ";
    cin >> x >> y;
    z = 5 * x + 2;
    cout << "As coordenadas (" << x << "," << y << ") estão ";
    (z > y)   ? cout << "à direita" << endl
    : (z < y) ? cout << "à esquerda" << endl
              : cout << "na curva" << endl;

    z = sqrt(pow(x, 2) + pow(y, 2));
    z = x * y;
    // imprima z em notacao cientifica com 2 casas decimais
    cout.setf(ios::scientific);
    cout << "O valor de z é: " << z << endl;

    return 0;
}

int polinomio(void)
{
    double a, b, c;
    cout << "Digite os valores de a, b, c: ";
    cin >> a >> b >> c;

    // verifica quantas raizes o polinomio possui
    double delta = pow(b, 2) - 4 * a * c;
    int qtdRaizes;

    (delta > 0)    ? qtdRaizes = 2
    : (delta == 0) ? qtdRaizes = 1
                   : qtdRaizes = 0;

    cout << "O polinomio possui " << qtdRaizes << " raiz(es) real(is)" << endl;

    string raizes;
    double x1, x2;

    (qtdRaizes == 2) ? x1 = (-b + sqrt(delta)) / (2 * a), x2 = (-b - sqrt(delta)) / (2 * a)
: (qtdRaizes == 1)   ? x1 = (-b + sqrt(delta)) / (2 * a)
                     : x1 = 0;

    (qtdRaizes == 2)   ? raizes = "x1 = " + to_string(x1) + " e x2 = " + to_string(x2)
    : (qtdRaizes == 1) ? raizes = "x = " + to_string(x1)
                       : raizes = "";

    cout << raizes << endl;

    cout << "Digite o valor de x: ";
    double x;
    cin >> x;

    double y = a * pow(x, 2) + b * x + c;
    cout << "O valor de p(" << x << ") é: " << y << endl;
    return 0;
}