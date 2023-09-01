#include <iostream>
#include <limits>

using namespace std;

int main(){
    int numA;

    cout << "Digite um numero inteiro: ";
    cin >> numA;

    cout << ((numA >= numeric_limits<short int>::min() && numA <= numeric_limits<short int>::max())?
            "este valor pertence ao intervalo dos short int":
            "e maior que um short int") << endl;


    return 0;
}