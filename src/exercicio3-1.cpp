#include <iostream>

using namespace std;

int main(void){
    //a)
    int a, b, c;

    //b)
    cout << "Digite dois numeros inteiros:\n";
    cin >> a >> b;

    //c)
    c = a + b;
    cout << "A soma de " << a << " e " << b << " em hexadecimal eh " << hex << c << endl;
    
    cout << dec;//volta para a base decimal

    //d)
    c = a * b;
    cout << "O produto de " << a << " e " << b << " em octal eh " << oct << c << endl;

    cout << dec;//volta para a base decimal

    //e)
    c = a - b;
    c > 0 ? cout << "A diferenca entre " << a << " e " << b << " eh " << c << endl : cout << "A diferenca entre " << a << " e " << b << " eh " << -c << endl;

    //f)
    c = a-b;
    cout << "O valor absoluto da diferenca entre " << a << " e " << b << " eh " << abs(c) << endl;
    //a funcao abs() retorna o valor absoluto de um numero

    //g)
    b == 0 ? cout << "Nao eh possivel dividir por zero." << endl : cout << "O quociente de " << a << " e " << b << " eh " << (c = a/b) << endl;
    
    //h)
    b != 0 ? a%b == 0 ? cout << a << " eh divivel por " << b << endl : cout << a << " nao eh divisivel de forma exata por " << b << endl : cout << "Nao eh possivel dividir por zero." << endl;
    
    return 0;
}