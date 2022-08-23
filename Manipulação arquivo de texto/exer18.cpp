#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int num[25], M[5][5], menu =-1;
    ofstream cad;
    cad.open("numeros.txt", ios::out);
    for(int i=0; i < 25; i++)
    {
        if(cad.is_open())
        {
            num[i] = rand()%101;
            cad << num[i] << ";";
        }
        else
        {
            cout << "Erro ao abrir o arquivo";
        }
    }
    cad.close();

    char c;
    cout << "Valores no arquivo \n";
    ifstream ler;
    char vet[50];
    ler.open("numeros.txt", ios::in);
    ler.getline(vet, 50, ';');
    while(!ler.eof())
    {
        cout << vet << " ; ";
        // atoi(vet); //atoi converte de alpha para int
        //atof converte de alpha para float
        ler.getline(vet, 50, ';');
    }
    ler.close();

    cout << "\n\n";

    int cont =0;
    for(int l=0; l < 5; l++)
    {
        for(int c=0; c < 5; c++)
        {
            M[l][c] = num[cont];
            cont++;
        }
    }

    do
    {
        system("cls");

        cout << "Matriz: " << endl;
        for(int l=0; l<5; l++)
        {
            for(int c=0; c<5; c++)
            {
                cout<<M[l][c]<<"\t";
            }
            cout<<endl;
        }

        cout << "0 - Sair" << endl;
        cout << "1 - Mostrar elementos da diagonal principal" << endl;
        cout << "2 - Mostrar os elementos da diagonal secundária" << endl;
        cout << "3 - Mostrar a matriz e a soma dos elementos acima e abaixo da diagonal principal." << endl;
        cout << "Sua Escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
        case 0:
            system("cls");
            cout << "Programa Finalizado.";
            getchar();
            break;
        case 1:
            cout<< "Números Diagonal Principal" << endl;
            for(int l=0; l<5; l++)
            {
                cout <<M[l][l]<<" , ";
            }
            getchar();
            break;
        case 2:
            for(int l=0; l<5; l++)
            {
                cout<<M[l][5-l-1]<<" , ";
            }
            getchar();
            break;
        case 3:
            int somaA=0, somaB=0;
            cout << "Matriz: " << endl;
            for(int l=0; l<5; l++)
            {
                for(int c=0; c<5; c++)
                {
                    cout<<M[l][c]<<"\t";
                    if(l < c)
                    {
                        somaA +=M[l][c];
                    }
                    if(l > c)
                    {
                        somaB +=M[l][c];
                    }
                }
                cout<<endl;
            }
            cout << "Soma dos elementos Acima da Diagonal principal: " << somaA << endl;
            cout << "Soma dos elementos Acima da Diagonal principal: " << somaB << endl;
            getchar();
            break;
        }

    }
    while(menu != 0);
}

