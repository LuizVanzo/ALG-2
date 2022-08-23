#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    string texto;
    int total=0, espaco=0, vogais=0, consoante=0, numero=0, especial=0;

    cout << "Digite o texto: "<< endl;
    getline(cin, texto);

    for(int i=1; i<=texto.size(); i++)
    {
        if(isspace(texto[i]))
        {
            espaco++;
        }
        if(isalnum(texto[i]))
        {
            if(isalpha(texto[i]))
            {
                if(texto[i] == 'a')
                {
                    vogais++;
                }
                else if(texto[i] == 'e')
                {
                    vogais++;
                }
                else if(texto[i] == 'i')
                {
                    vogais++;
                }
                else if(texto[i] == 'o')
                {
                    vogais++;
                }
                else if(texto[i] == 'u')
                {
                    vogais++;
                }
                else
                {
                    consoante++;
                }
            }
            else if(isdigit(texto[i]))
            {
                numero++;
            }
        }
        else
        {
            especial++;
        }



        total++;

    }
    if(consoante > 0)
    {
        consoante+=1;
    }

    cout << "Total de caracteres do texto: " << total <<  endl;
    cout << "Total de espaços em branco do texto: " << espaco << endl;
    cout << "Total de vogais: " << vogais <<  endl;
    cout << "Total de consoantes: " << consoante << endl;
    cout << "Total de números: " << numero << endl;
    cout << "Total de caracter especial: " << especial << endl;
}


