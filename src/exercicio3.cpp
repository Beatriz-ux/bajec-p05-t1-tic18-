#include <iostream>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a, b, c;
    cout << "B) " << endl;
    cout << "Digite dois numero inteiro: ";
    cin >> a >> b;
    cout << "C)" << endl;
    c = a + b;
    cout << "A soma de " << a << " + " << b << " = 0x" << hex << int(c) << dec << endl;
    c = a * b;
    cout << "O produto de " << a << " * " << b << " = 0" << oct << int(c) << dec << endl;
    c = (a - b) < 0 ? (a - b) * (-1) : (a - b);
    cout << "O modulo de " << a << " - " << b << " = " << dec << int(c) << dec << endl;
    c = abs(a - b); // valor absoluto de forma direta
    cout << "O modulo de " << a << " - " << b << " = " << dec << int(c) << dec << endl;
    bool divisivel;
    string mensagem;
    divisivel = (b == 0) ? false : true;
    cout << divisivel << endl;
    c = divisivel ? (a/b) : 0 ;

    divisivel ? mensagem = "O quociente de " + to_string(a) + " / " + to_string(b) + " = " + to_string(c) + ((a % b) ? mensagem = ", essa divisão não é exata" : mensagem = ", essa divisão é exata") : mensagem = "Não é possivel dividir por zero";
    cout << mensagem << endl;

    cout << "Informe um número:" << endl;
    cin >> a;
    // um short tem a capacidade reduzida pela metade de um int
    (a >= SHRT_MIN && a <= SHRT_MAX) ? cout << "Este valor (" << a << ") pertence ao intervalo dos short int " << endl
                                     : cout << " O numero " << a << " é maior que um short int " << endl;

    return 0;
}