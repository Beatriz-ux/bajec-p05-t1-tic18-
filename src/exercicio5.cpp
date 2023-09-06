#include <iostream>

using namespace std;

int main(void){
    unsigned char info_gene;
    unsigned char gene_teste = 0b1;
    unsigned short int gene;
    int cont = 0;

    cout << "Entre com a informacao genetica da planta: " << endl;
    cin >> gene;
    
    info_gene = (unsigned char) gene;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;

    info_gene & gene_teste ? cont++ : cont = cont;
    gene_teste = gene_teste << 1;
    
    info_gene & gene_teste ? cont++ : cont = cont;

    cout << cont << " genes estao presentes" << endl;

    cout << "Qual gene quer verificar? (1-8)\n";
    cin >> gene;
    
    gene = 0b1 << (gene - 1);

    gene = info_gene & gene;

    gene > 0 ? cout << "Gene presente" : cout << "Gene não presente";

    return 0;
}