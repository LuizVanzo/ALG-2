#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct cadastro
{
    char nome[50];
    int codConta;
    float saldo;
};

void leitura(cadastro aux[], int &i);
void mostra(cadastro a[], int c);
void depositar(cadastro a[], int c);
void sacar(cadastro a[], int c);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cadastro x[50];
    int menu = -1, cont = -1, codi;

    do
    {
        system("cls");
        cout << "##############MENU DE OPCOES###############" << endl;
        cout << "# 1 - Cadastrar conta                     #" << endl;
        cout << "# 2 - Visualizar dados                    #" << endl;
        cout << "# 3 - Depositar                           #" << endl;
        cout << "# 4 - Sacar                               #" << endl;
        cout << "# 5 - Sair                                #" << endl;
        cout << "###########################################" << endl;
        cout << "Sua escolha: " << endl;
        cin >> menu;
        fflush(stdin);


        if(menu == 5)
        {
            system("cls");
            cout << "PROGRAMA FINALIZADO COM SUCESSO.";
            system("pause");
        }
        else if(menu == 1)
        {
            system("cls");
            leitura(x, cont);
        }
        else if(menu == 2)
        {
            system("cls");
            if(cont < 0)
            {
                cout << "Nao existem dados cadastrados.";
            }
            else
            {
                mostra(x, cont);
                getchar();
            }

        }
        else if(menu == 3)
        {
            depositar(x, cont);
        }
        else if(menu == 4)
        {
            sacar(x, cont);
        }
    }
    while(menu != 5);
}

void leitura(cadastro aux[], int &i)
{
    i++;
    cout << "Informe o nome do cliente: ";
    gets(aux[i].nome);

    cout << "Informe o código da conta: ";
    cin >> aux[i].codConta;

    cout << "Informe o seu saldo: ";
    cin >> aux[i].saldo;

}

void mostra(cadastro a[], int c)
{
    cout << "PRODUTOS CADASTRADOS: ";
    for(int i = 0; i <= c; i++)
    {
        cout << "\n-------------------------------" << endl;
        cout << "Código do Cliente: " << a[i].codConta << endl;
        cout << "Nome do Cliente: " << a[i].nome << endl;
        cout << "Saldo: " << a[i].saldo << endl;
    }
}

void depositar(cadastro a[], int c)
{
    int cod;
    float deposito;

    cout << "Qual o código da conta" << endl;
    cin >> cod;

    for(int i = 0; i <= c; i++)
    {
        if(a[i].codConta == cod)
        {
            cout << "Qual o valor do deposito" << endl;
            cin >> deposito;
            a[i].saldo += deposito;
        }
    }
}

void sacar(cadastro a[], int c)
{
    int cod;
    float saque;

    cout << "Qual o código da conta" << endl;
    cin >> cod;

    for(int i = 0; i <= c; i++)
    {
        if(a[i].codConta == cod)
        {
            if(a[i].saldo > saque)
            {
                cout << "Qual o valor do saque" << endl;
                cin >> saque;
                a[i].saldo -= saque;
            }
            else
            {
                 cout << "Saldo insuficiente!!! " << endl;
            }
        }
    }
}
