#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    string texto;
    int cont=0, cont2=0;

    cout << "Digite algo: "<< endl;
    getline(cin, texto);

    cout << "O texto lido foi: " << texto << endl;
    string teste(texto);

    for(int l=texto.size ( ); l>=0; l--)
    {
            teste[cont2]  = texto[l-1];
            cont2++;
    }
    cout <<"Texto de forma invertida: " << teste << endl;

    for(int i=1; i<=texto.size ( ); i++)
    {
        if(isspace(texto[i]))
        {
           for(int j=i; j<=texto.size ( ); j++)
           {
             texto[j] = texto[j+1];
           }
        }
    }
    cout << "O texto sem os espaços: " << texto << endl;

    for(int l=texto.size ( ); l>=0; l--)
    {
            teste[cont]  = texto[l-2];
            cont++;
    }
    cout << "Texto sem os espaços de forma invertida: " << teste;
}
