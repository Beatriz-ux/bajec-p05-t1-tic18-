#include <iostream>

using namespace std;

int main(void){
    //a)
    char ch1, ch2, ch3;

    //b)
    cout << "Digite um caracter: ";
    cin >> ch1;

    //c)
    isupper(ch1) ? cout << "O caracter " << ch1 << " eh maiusculo." << endl : cout << endl;
    islower(ch1) ? cout << "O caracter " << ch1 << " eh minusculo." << endl : cout << endl;
    isdigit(ch1) ? cout << "O caracter " << ch1 << " eh um digito." << endl : cout << endl;
    isalnum(ch1) ? cout << "O caracter " << ch1 << " eh um alphanumerico." << endl : cout << "O caracter " << ch1 << " não eh um alphanumerico." << endl;
    //d)
    //as funcoes nativas sao:
    //isupper - retorna 1 se o caracter for maiusculo e 0 se nao for
    //islower - retorna 1 se o caracter for minusculo e 0 se nao for
    //isdigit - retorna 1 se o caracter for um digito e 0 se nao for
    //isalnum - retorna 1 se o caracter for alphanumerico e 0 se nao for

    //e)
    ch2 = 81;
    cout << "Dec\tHex\tOct\tChar\n";
    cout << (int)ch2 << '\t' << hex << (int)ch2 << '\t' << oct << (int)ch2 << '\t' << ch2 << '\n';

    //f)
    isupper(ch2) ? ch3 = tolower(ch2) : ch3 = toupper(ch2);
    cout << ch3 << endl;

    return 0;
}