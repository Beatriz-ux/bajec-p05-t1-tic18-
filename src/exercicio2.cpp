#include <iostream>
using namespace std;
int main(void)
{
    //"A)" 
    char ch1, ch2, ch3;
    string resposta;

    cout << "B)" << endl;
    cout << "Digite um caracter: ";
    cin >> ch1;

    cout << "C)" << endl;
    (int(ch1) >= 65 && int(ch1) <= 90) ? resposta = "Letra maiuscula" : ((int(ch1) >= 97 && int(ch1) <= 122) ? resposta = "Letra minuscula" : ((int(ch1) >= 48 && int(ch1) <= 57) ? resposta = "Digito" : resposta = "Simbolo"));
    cout << resposta << endl;
    cout << "D)" << endl;
    cout << "Digite um caracter: ";
    cin >> ch1;
    (isupper(ch1)) ? resposta = "Letra maiuscula" : ((islower(ch1)) ? resposta = "Letra minuscula" : ((isdigit(ch1)) ? resposta = "Digito" : resposta = "Simbolo"));
    cout << resposta << endl;

    ch2=81;
    cout << "Decimal" << "\tOctal" << "\tHexa" << "\tCaracter"<< endl;
    cout << dec << int(ch2) << "\t0" << oct << int(ch2) << "\t0x" << hex << int(ch2) << "\t" << ch2 << endl;
    ch3=tolower(ch2);
    cout << dec << int(ch3) << "\t0" << oct << int(ch3) << "\t0x" << hex << int(ch3) << "\t" << ch3 << endl;
    

    return 0;
}