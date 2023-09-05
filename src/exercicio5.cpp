#include <iostream>

using namespace std;

int main(){
    short int genePlanta, geneInput; // representar a informação dos genes com um inteiro sem sinal
    unsigned int count_genes = 0;

    cout << "Digite o numero com informação genetica da planta: ";
    cin >> genePlanta;

    // b)
    count_genes += (genePlanta & (unsigned char)1)? 1:0;
    count_genes += (genePlanta & (unsigned char)2)? 1:0;
    count_genes += (genePlanta & (unsigned char)4)? 1:0;
    count_genes += (genePlanta & (unsigned char)8)? 1:0;
    count_genes += (genePlanta & (unsigned char)16)? 1:0;
    count_genes += (genePlanta & (unsigned char)32)? 1:0;
    count_genes += (genePlanta & (unsigned char)64)? 1:0;
    count_genes += (genePlanta & (unsigned char)128)? 1:0;

    cout << "Estao presentes " << count_genes << " genes na planta.\n";


    // c)
    cout << "Digite um gene (de 1 a 8): ";
    cin >> geneInput;
    
    cout << "Gene " << geneInput << (((1 << (geneInput -1)) & genePlanta)? " esta presente": " nao esta presente") << endl;

    return 0;

}