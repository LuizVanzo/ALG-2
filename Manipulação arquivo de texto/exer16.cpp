#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void escrita(int n);
void leitura();

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    float num[10], soma=0, media, maior, menor;

    ofstream cad;
    cad.open("exer_16.txt", ios::out);
    for(int i=0; i < 10; i++)
    {
        cout << "Digite números Float" << endl;
        cin >> num[i];

        if(cad.is_open())
        {
            cad << num[i] << ";";
            soma += num[i];

            if(i == 0)
            {
                maior = num[i];
                menor = num[i];
            }
            if(maior < num[i])
            {
                maior = num[i];
            }
            if(menor > num[i])
            {
               menor = num[i];
            }
        }
        else
        {
            cout << "Erro ao abrir o arquivo";
        }
    }
    for(int i=0; i < 10; i++)
    {
      cout << num[i] << " ; ";
    }

    media = soma/10.0;

    cout << "Soma: "  << soma << endl;
    cout << "Média: "  << media << endl;
    cout << "Maior: "  << maior << endl;
    cout << "Menor: "  << menor << endl;

    cad.close();


}
