#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int notas;
    float media, soma;
    cout << "Informe quantas avalia��es foram realizadas: ";
    cin >> notas;

    float *vet = new float[notas];

    srand(time(NULL));
    for(int i = 0;i < notas; i++)
    {
        cout << "Informe a " << i+1 << " nota" << endl;
        cin >>*vet;
        soma += *vet;
        vet++;
    }
    vet -= notas;

    media = soma/notas;

    cout << fixed;
    cout.precision(1);
    cout << "M�dia do Aluno: " << media << endl;

        if(media >= 6.0)
        {
            cout << "Aluno Aprovado!!!" << endl;
        }else
        {
            cout << "Aluno Reprovado" << endl;
        }

    delete [] vet;
}



