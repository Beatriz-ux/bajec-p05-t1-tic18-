#include <iostream>
#include <climits>

using namespace std;

int main(void){
    
    int n;
    
    //a)
    cout << "Digite um numero: ";
    cin >> n;

    //b)
    n <= SHRT_MAX ? cout << n << " este valor pertence ao intervalo dos short int." << endl : cout << n << " e maior que um short int." << endl;

    return 0;
}