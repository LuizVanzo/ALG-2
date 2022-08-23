#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void escrita(string n);
void leitura();
void procura(string nick);

main()
{
    string nome, nome2;

    int menu = -1;

    do
    {
        system("cls");
        cout << "0 - Sair" << endl;
        cout << "1 - Cadastra nome" << endl;
        cout << "2 - Mostrar" << endl;
        cout << "3 - Consultar" << endl;
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
              system("cls");
              cout << "Informe o nome a ser cadastrado: ";
              getline(cin, nome);
              fflush(stdin);
              escrita(nome);
              getchar();
              break;
           case 2:
              system("cls");
              cout << "Dados existentes no arquivo: " << endl;
              leitura();
              getchar();
              break;
           case 3:
              system("cls");
              cout << "Informe o nome a ser buscado: ";
              getline(cin, nome2);
              procura(nome2);
              getchar();
              break;

        };

    }while (menu != 0);

}

void escrita(string n)
{

    ofstream cad;
    cad.open("cadastro.txt", ios::app);

    if(cad.is_open())
    {
        cad << n << "\n";
        cout << "Nome escrito no arquivo com sucesso";
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }

    cad.close();
}

void leitura()
{
    ifstream ler;

    char vet[100];
    ler.open("cadastro.txt", ios::in);
    ler.getline(vet, 100);
    while(!ler.eof())
    {
        cout << vet << " # ";
        ler.getline(vet, 100);
    }
    ler.close();


}
void procura(string nick)
{
    ifstream ler;

    char vet[100];
    ler.open("cadastro.txt", ios::in);
    ler.getline(vet, 100);
    while(!ler.eof())
    {
        if(vet == nick)
        {
          cout << "Nome já existente" << endl;
        }else
        {
        cout << "Nome não encontrado" << endl;
        }
        ler.getline(vet, 100);
    }
    ler.close();
}
