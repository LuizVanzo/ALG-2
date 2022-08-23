#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>


using namespace std;

struct dados
{
    char nome[100];
    int fone;
    int idade;
};

void leitura(dados *pcad, int *pi);
void mostra(dados *pcad, int *pi);
void nome(dados *pcad, int *pi, string *pnome);
void fone(dados *pcad, int *pi, int *pfone);



int main()
{
    setlocale(LC_ALL, "Portuguese");

    dados cad[50];
    int menu, indice = -1, numero;
    string nick;
    do
    {
        system("cls");
        cout << "MENU DE OPCOES" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Incluir novo item" << endl;
        cout << "2 - Mostrar Agenda" << endl;
        cout << "3 - Busca por nome " << endl;
        cout << "4 - Busca por fone " << endl;
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
                leitura(cad, &indice);
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "Nao existe nenhum produto cadastrado" << endl;
                else
                    mostra(cad, &indice);
                getchar();
                break;
             case 3 :
                system("cls");

                cout << "Qual o nome que você quer buscar?" << endl;
                cin >> nick;

                nome(cad, &indice, &nick);
                getchar();
                system("pause");
                break;
             case 4 :
                system("cls");

                cout << "Qual o numero que você quer buscar?" << endl;
                cin >> numero;

                fone(cad, &indice, &numero);
                getchar();
                system("pause");
                break;
        }

    }while(menu != 0);

}

void leitura(dados *pcad, int *pi)
{
    (*pi)++;
    cout << "Informe o valor nome: ";
    gets(pcad[*pi].nome);
    fflush(stdin);


    cout << "Informe o telofone: ";
    cin >> pcad[*pi].fone;
    fflush(stdin);

    cout << "Informe a sua idade: ";
    cin >> pcad[*pi].idade;
    fflush(stdin);
}

void mostra(dados *pcad, int *pi)
{
    for(int i = 0; i <= *pi; i++)
    {

        cout << "Nome: " << pcad[i].nome << endl;
        cout << "Telofone: " << pcad[i].fone << endl;
        cout << "Idade: " << pcad[i].idade << endl;
        cout << "-----------------------------\n\n";
    }
}

void nome(dados *pcad, int *pi, string *pnome)
{
    cout << pnome << endl;
    for(int i = 0; i <= *pi; i++)
    {
        if(pcad[i].nome == *pnome)
        {
            cout << "Nome: " << pcad[i].nome << endl;
            cout << "Telofone: " << pcad[i].fone << endl;
            cout << "Idade: " << pcad[i].idade << endl;
            cout << "-----------------------------\n\n";
        }
    }
}
void fone(dados *pcad, int *pi, int *pfone)
{

    for(int i = 0; i <= *pi; i++)
    {
        if(pcad[i].fone == *pfone)
        {
            cout << "Nome: " << pcad[i].nome << endl;
            cout << "Telofone: " << pcad[i].fone << endl;
            cout << "Idade: " << pcad[i].idade << endl;
            cout << "-----------------------------\n\n";
        }
    }
}
