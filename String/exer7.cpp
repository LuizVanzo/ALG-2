#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    string texto;
    char caracter;

    cout << "Digite algo: "<< endl;
    getline(cin, texto);

    cout << "Digite um caracter: "<< endl;
    cin >> caracter;

    cout << "O texto lido foi: " << texto << endl;


    for(int i=1; i<=texto.size ( ); i++)
    {
        if(texto[i] == caracter)
        {
            texto[i] = ' ';
        }
    }

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
    cout << "O texto sem o caracter digitado: " << texto << endl;
}
