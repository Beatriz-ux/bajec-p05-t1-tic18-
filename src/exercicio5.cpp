#include<iostream>

int main()
{
    //a
    unsigned short int gene_int;
    unsigned short int gene_count = 0;
    unsigned char gene;
    unsigned char gene_test = 0b1;
    
    std::cout << "Digite o gene: ";
    std::cin >> gene_int;
    gene = (unsigned char)gene_int;

    std::cout << gene << std::endl;

    //b
    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;
    gene_test = gene_test << 1;

    gene & gene_test ? gene_count++ : gene_count = gene_count;

    gene_count == 0 ? (std::cout << "Nenhum gene presente") :
    (std::cout << "Genes presentes: " << gene_count);
    std::cout << std::endl;

    //c
    std::cout << "Digite qual gene voce deseja verificar: ";
    std::cin >> gene_int;

    gene_int = 0b1 << (gene_int-1);
    gene_int = gene_int & gene;

    std::cout << (gene_int > 0 ? "Gene presente" : "Gene nao presente");
    return 0;
}