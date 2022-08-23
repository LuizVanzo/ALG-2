#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int *vet = new int[10];
    int menu, soma=0;
    float media;

    do
    {
        system("cls");
        cout << "MENU DE OPCOES" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Gerar valores" << endl;
        cout << "2 - Mostrar valores" << endl;
        cout << "3 - Mostrar pares" << endl;
        cout << "4 - Mostrar impares" << endl;
        cout << "5 - Mostrar soma e média" << endl;
        cout << "Sua escolha: ";
        cin >> menu;

        if(menu == 0)
        {
            cout << "Programa finalizado" << endl;
            system("pause");
        }
        else if(menu == 1)
        {
            for(int i = 0; i < 10; i++)
            {
                *vet = rand() % 20;
                vet++;
            }
            vet -= 10;
        }
        else if(menu == 2)
        {
            for(int i = 0; i < 10; i++)
            {
                cout << vet[i] << ", ";
            }
            cout << endl;
            system("pause");
        }
        else if(menu == 3)
        {
            for(int i = 0; i < 10; i++)
            {
                if(vet[i] % 2 == 0)
                {
                    cout << vet[i] << ", ";
                }
            }
            cout << endl;
            system("pause");
        }
        else if(menu == 4)
        {
            for(int i = 0; i < 10; i++)
            {
                if(vet[i] % 2 != 0)
                {
                    cout << vet[i] << ", ";
                }
            }
            cout << endl;
            system("pause");
        }
        else if(menu == 5)
        {
            for(int i = 0; i < 10; i++)
            {
                soma+=vet[i];
            }
            cout << "A soma é: " << soma <<endl;
            media = soma/10.0;
            cout << "A média é: " << media <<endl;
            system("pause");
        }
    }
    while(menu != 0);

    delete [] vet;
}
