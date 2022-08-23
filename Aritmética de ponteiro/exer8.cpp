#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
void gera(int *p);
void mostra(int **p);
void par(int **p);
void impar(int **p);



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[10], *pvet, menu;
    pvet = vet;
    srand(time(NULL));

    do
    {
        system("cls");
        cout << "MENU DE OPCOES" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Gerar valores do vetor" << endl;
        cout << "2 - Mostrar Valores" << endl;
        cout << "3 - Mostrar os pares  " << endl;
        cout << "4 - Mostrar os ímpares " << endl;
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "Programa finalizado";
                getchar();
                break;
            case 1 :
                system("cls");
                gera(vet);
                getchar();
                break;
            case 2 :
                system("cls");
                mostra(&pvet);
                getchar();
                break;
            case 3 :
                system("cls");
                par(&pvet);
                getchar();
                break;
             case 4 :
                system("cls");
                impar(&pvet);
                getchar();
                break;
        }

    }while(menu != 0);
}
void gera(int *p)
{
    for(int i = 0; i < 5; i++)
    {
        *(p + i) = rand() % 10;
    }
}

void mostra(int **p)
{
    for(int i = 0; i < 5; i++)
    {
        cout << (*p)[i] << ", ";
    }
}

void par(int **p)
{
    for(int i = 0; i < 5; i++)
    {
        if((*p)[i] % 2 == 0)
        {
          cout << (*p)[i] << ", ";
        }
    }
}

void impar(int **p)
{
    for(int i = 0; i < 5; i++)
    {
        if((*p)[i] % 2 != 0)
        {
          cout << (*p)[i] << ", ";
        }
    }
}

