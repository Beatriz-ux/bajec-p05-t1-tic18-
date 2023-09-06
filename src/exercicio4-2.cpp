#include <iostream>
#include <cmath>


using namespace std;


int main(){
    double cofA, cofB, cofC;
    double x;
    double delta, resultA, resultB;

    cout << "Digite um coeficiente a: ";
    cin >> cofA;
    cout << "Digite um coeficiente b: ";
    cin >> cofB;
    cout << "Digite um coeficiente c: ";
    cin >> cofC;

    /* 
       valor de Δ pode ser utilizado como parâmetro para 
       decidir como serão as raízes da equação. Uma equação 
       em que Δ > 0 possui duas raízes reais distintas, uma 
       equação em que Δ = 0 possui duas raízes reais iguais 
       ou uma raiz real dupla, isto é, x' = x'', e uma 
       equação em que Δ < 0 não possui raízes reais
    */
    delta = (cofB*cofB) - (4*cofA*cofC);
    resultA = ((delta>=0)? ((-cofB) + (sqrt(delta)))/(2*cofA): NULL);
    resultB = ((delta == 0)? resultA: ((delta<0)? NULL: ((-cofB) - (sqrt(delta)))/(2*cofA))); 
    cout << ((delta > 0)? "Duas raizes reais: ":
            ((delta == 0)? "Uma raiz real: ": "Nenhuma raiz real."));
    cout << ((delta < 0)? NULL : resultA);
    cout << ((delta > 0)? " e ": "\n") << ((delta > 0)? resultB: NULL);
    cout << endl;

    cout << "\nDigite x: ";
    cin >> x;
    cout << "Resultado de P(x) = ax² + bx + c: " << (cofA*x*x)+ (cofB*x)+ cofC;

    return 0;
}