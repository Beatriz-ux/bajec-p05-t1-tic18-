#include <iostream>

using namespace std;

int main(void){
    unsigned char info_gene;
    unsigned short int gene;
    int cont = 0;

    cout << "Digite o valor do gene: ";
    cin >> info_gene;

    gene = info_gene & 1;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 2;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 4;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 8;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 16;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 32;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 64;
    gene > 0 ? cont++ : cont = cont;
    gene = info_gene & 128;
    gene > 0 ? cont++ : cont = cont;

    cout << cont << " genes estao presentes" << endl;

    cout << "Qual gene quer verificar? (1-8)\n";
    cin >> gene;
    
    gene = 1 << (gene - 1);

    gene = info_gene & gene;

    gene > 0 ? cout << "Gene presente" : cout << "Gene não presente";


    return 0;
}