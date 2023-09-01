#include <iostream>

using namespace std;

int main(){
    int numA, numB, numC;
    bool resto;

    cout << "Digite um numero inteiro: ";
    cin >> numA;
    cout << "Digite um numero inteiro: ";
    cin >> numB;

    numC = numA + numB;
    cout << numA << " + "<< numB << " =  (hex)" << hex << numC;
    cout << dec << endl; 

    numC = numA * numB;
    cout << numA << " * "<< numB << " =  (oct)" << oct << numC;
    cout << dec << endl; 

    numC = ((numA - numB) <0) ? -(numA - numB): numA - numB;
    cout << "|"<< numA << " - "<< numB << "| =  (dec)" <<  numC << endl;

    // ao colocar no header #include <cstdlib>, é possivel utilizar a função
    // abs(numero) para receber o valor absoluto de um inteiro

    numC = (numB != 0)? numA / numB: NULL;
    cout << numA << " / "<< numB << " = ";
    if (numC)
        cout << "(dec)"<<numC;
    else
        cout<< "Divisao invalida";
    cout << endl;
 
    


    return 0;
}