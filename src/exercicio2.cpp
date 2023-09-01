#include <iostream>

using namespace std;

int main(){
    char ch1, ch2, ch3;
    cout << "Digite um caracte: ";
    cin >> ch1;
    cout << ((ch1>=65 && ch1<=90)? "Caractere Maisculo":
            (ch1>=97 && ch1<=122)? "Caractere Minusculo":
            (ch1>=48 && ch1<=57)? "Caractere Digito": "Outro tipo de caractere");
    
    // isdigit(caractere) retorna nao-zero se o caracter for um numero
    // islower(caractere) retorna nao-zero se o caracter for uma letra minuscula
    // isupper(caractere) retorna nao-zero se o caracter for uma letra maiuscula
    //
    // (!isdigit() || !islower() || !isupper(caractere)) poderia ser usado para 
    // saber se é algum outro tipo de caracte

    

    return 0;
}