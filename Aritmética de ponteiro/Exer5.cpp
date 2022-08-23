#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char texto[100];
    char *ptexto;
    int cont=0;
    ptexto = texto;

    cout << "Digite um texto qualquer: ";
    gets(texto);
    fflush(stdin);

    cout << ptexto << endl;

    while(*ptexto)
    {
        ptexto++;
        cont++;
    }

    for(int i=(cont-1); i >= 0; i--)
    {
      cout << *(texto + i) << ",";
    }


}

