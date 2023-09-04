#include <iostream>
using namespace std;
int main(void)
{
    unsigned char gene, geneTest = 0b00000001;
    unsigned short int geneInt;
    cout << "Digite o gene: ";
    cin >> geneInt;
    gene = geneInt;
    bool genes;
    genes = gene & geneTest;
    genes ? cout << "Gene 1 presente" << endl : cout << "";
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 2 presente" << endl : cout << "";
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 3 presente" << endl : cout << "";
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 4 presente" << endl : cout << "";
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 5 presente" << endl : cout << "" << endl;
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 6 presente" << endl : cout << "" << endl;
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 7 presente" << endl : cout << "" << endl;
    geneTest = geneTest << 1;
    genes = gene & geneTest;
    genes ? cout << "Gene 8 presente" << endl : cout << "" << endl;

    return 0;
}