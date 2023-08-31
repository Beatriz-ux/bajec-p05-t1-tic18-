#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
    //a)
    double x, y, z;

    //b)
    cout << "Digite 2 numeros de ponto flutuante" << endl;
    cin >> x >> y;

    //c)
    z = (5 * x) + 2;
    y > z ? cout << "O ponto (" << x << ", " << y << ") esta a direita da curva" << endl : y < z ? cout << "O ponto (" << x << ", " << y << ") esta a esquerda da curva" << endl : cout << "O ponto (" << x << ", " << y << ") esta na curva" << endl;
    
    //d)
    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "A distancia euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas eh: " << z << endl;

    //e)
    z = x * y;
    cout << "O produto de " << x << " e " << y << " em notacao cientifica eh: " << setprecision(0) << scientific << z << endl;

    return 0;
}