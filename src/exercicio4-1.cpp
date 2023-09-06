#include <iostream>
#include <cmath>

using namespace std;


int main(){
    double x, y, z;
    double fx;

    cout << "Digite um numero real: ";
    cin >> x;
    cout << "Digite um numero real: ";
    cin >> y;
    
    fx = (5*x) + 2;
    cout << "O ponto esta";
    cout << ((fx == y)? "na curva" :
            ((fx > y)? " a direita da curva":
            " a esquera da curva")) << endl; 
    
    // d)
    z = sqrt((x*x) + (y*y));

    z = x*y;
    cout << x << " * " << y << " em notacao cientifica" << scientific << z << endl;





    return 0;
}