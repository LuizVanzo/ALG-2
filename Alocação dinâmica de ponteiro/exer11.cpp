#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int x1,x2, x3, cont=0, maior, menor;

    cout << "Informe o tamanho do vetor: ";
    cin >> x1;
    fflush(stdin);

    cout << "Informe o tamanho do 2 vetor: ";
    cin >> x2;
    fflush(stdin);

    int *vet = new int[x1];
    int *vet2 = new int[x2];
    int *vet3 = new int[x1 + x2];

    for(int i = 0; i < x1; i++)
    {
        *vet = rand() % 20;
        vet++;
    }
    vet -= x1;

    for(int i = 0; i < x2; i++)
    {
        *vet2 = rand() % 20;
        vet2++;
    }
    vet2 -= x2;

    for(int i = 0; i < x1; i++)
    {
        vet3[i] = vet[i];
        cont++;
    }
    for(int i = 0; i < x2; i++)
    {
        vet3[cont+i] = vet2[i];
    }

    cout << "Valores de x1: ";
    for(int i = 0; i < x1; i++)
    {
        cout << vet[i] << ", ";
    }
    cout << endl;

    cout << "Valores de x2: " ;
    for(int i = 0; i < x2; i++)
    {
        cout << vet2[i] << ", ";
    }
    cout << endl;

    cout << "Valores de x3: ";
    for(int i = 0; i < x1+x2; i++)
    {
        cout << vet3[i] << ", ";
    }
    cout << endl;

    int aux;
    bool trocou;

    do{
        trocou = false;
        for(int i=0; i<x1+x2; i++)
        {
            if(vet3[i] > vet3[i+1])
            {
                aux =  vet3[i+1];
                vet3[i+1] =  vet3[i];
                vet3[i] = aux;
                trocou = true;
            }
        }
    }while(trocou == true);

    cout << "Valores de x3 Ordenados: ";
    for(int i = 0; i < x1+x2; i++)
    {
        if(i == 0)
        {
            maior = vet3[i];
            menor = vet3[i];
        }
        if(maior < vet3[i])
        {
            maior = vet3[i];
        }
        if(menor > vet3[i])
        {
            menor = vet3[i];
        }
        cout << vet3[i] << ", ";
    }
    cout << endl;

    cout << "O maior valor é: " << maior << endl;
    cout << "O menor valor é: " << menor << endl;

    delete [] vet;
}



