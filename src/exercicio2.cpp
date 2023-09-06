#include<iostream>
#include<cctype> //Para checar se é maiúsculo, minúsculo, dígito ou outro tipo

int main()
{
    //a
    char ch1, ch2, ch3;

    //b
    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    //c
    std::cout << "Sem utilizar <cctype>: " << std::endl;

    std::cout << (64 < int(ch1) && int(ch1) < 91 ? "Caractere maiusculo" :
    96 < int(ch1) && int(ch1) < 123 ? "Caractere minusculo" :
    47 < int(ch1) && int(ch1) < 58 ? "Caractere digito" : "Outro tipo de caractere");    

    //d Usando <cctype>
    std::cout << std::endl << "Utilizando <cctype>: " << std::endl;

    std::cout << (isupper(ch1) ? "Caractere maiusculo" :
    islower(ch1) ? "Caractere minusculo" :
    isdigit(ch1) ? "Caractere digito" : "Outro tipo de caractere");
    std::cout << std::endl;

   /* Para testar "todos" os caracteres da tabelas ASCII:

    std::cout << std::endl << std::endl << std::endl;
    for(ch1 = 33; ch1<127; ch1++)
    {
        std::cout << ch1 << " - " << int(ch1) << " ";
        std::cout << (64 < int(ch1) && int(ch1) < 91 ? "Caractere maiusculo" :
        96 < int(ch1) && int(ch1) < 123 ? "Caractere minusculo" :
        47 < int(ch1) && int(ch1) < 58 ? "Caractere digito" : "Outro tipo de caractere");
        std::cout << std::endl;
    } //*/
    
    //e
    ch2 = 81;
    std::cout << int(ch2) << " - " << 
    std::oct << int(ch2) << " - " <<
    std::hex << int(ch2) << " - " << 
    std::dec << ch2 <<std::endl; 

    //f
    ch3 = tolower(ch2);
    std::cout << int(ch3) << " - " << 
    std::oct << int(ch3) << " - " <<
    std::hex << int(ch3) << " - " << 
    std::dec << ch3 <<std::endl;
    return 0;
}