#include <iostream>

using namespace std;

int main(void){
    unsigned char info_gene;
    unsigned short int gene;

    cout << "Digite o valor do gene: ";
    cin >> info_gene;




    cout << "Qual gene quer verificar? (1-8)\n";
    cin >> gene;
    
    gene = 1 << (gene - 1);

    gene = info_gene & gene;

    gene > 0 ? cout << "Gene presente" : cout << "Gene não presente";


    return 0;
}