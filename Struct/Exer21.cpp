#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct cadastro
{
    char produto[50];
    int codigo;
    int quantidade;
    float preco;
};

void leitura(cadastro aux[], int &i);
void mostra(cadastro a[], int c);
void consulta(cadastro verfic[], int c, int cod);
void vender(cadastro verfic[], int c);

 int main()
{
    setlocale(LC_ALL, "Portuguese");

    cadastro x[50];
    int menu = -1, cont = -1, codi;

    do
    {
        system("cls");
        cout << "##############MENU DE OPCOES###############" << endl;
        cout << "# 0 - Sair                                #" << endl;
        cout << "# 1 - Cadastrar Produto                   #" << endl;
        cout << "# 2 - Listar produtos                     #" << endl;
        cout << "# 3 - Consultar Produtos pelo Código      #" << endl;
        cout << "# 4 - Vender Produto                      #" << endl;
        cout << "###########################################" << endl;
        cout << "Sua escolha: " << endl;
        cin >> menu;
        fflush(stdin);


        if(menu == 0)
        {
            system("cls");
            cout << "PROGRAMA FINALIZADO COM SUCESSO.";
            getchar();
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
            system("cls");
            cout << "Digite o Código do produto pra verificar" << endl;
            cin >> codi;

            consulta(x, cont, codi);
            system("pause");
        }
        else if(menu == 4)
        {
            if(cont < 0)
            {
                cout << "Nao existem dados cadastrados.";
            }
            else
            {
                vender(x, cont);
                 system("pause");
            }
        }
    }
    while(menu != 0);
}

void leitura(cadastro aux[], int &i)
{
    i++;
    cout << "Informe o nome do produto: ";
    gets(aux[i].produto);

    cout << "Informe o Código do Produto: ";
    cin >> aux[i].codigo;

    cout << "Informe a Quantia em estoque: ";
    cin >> aux[i].quantidade;

    cout << "Informe o valor de venda: ";
    cin >> aux[i].preco;

}

void mostra(cadastro a[], int c)
{
    cout << "PRODUTOS CADASTRADOS: ";
    for(int i = 0; i <= c; i++)
    {
        cout << "\n-------------------------------" << endl;
        cout << "Produto: " << a[i].produto << endl;
        cout << "Código: " << a[i].codigo << endl;
        cout << "Quantidade em estoque: " << a[i].quantidade << endl;
        cout << "Preço: " << a[i].preco << endl;

    }
}

void consulta(cadastro verfic[], int c, int cod)
{
    for(int i = 0; i <= c; i++)
    {
        if(verfic[i].codigo == cod)
        {
            cout << "\n-------------------------------" << endl;
            cout << "Produto: " << verfic[i].produto << endl;
            cout << "Código: " << verfic[i].codigo << endl;
            cout << "Quantidade em estoque: " << verfic[i].quantidade << endl;
            cout << "Preço: " << verfic[i].preco << endl;
        }
    }
}

void vender(cadastro verfic[], int c)
{
    int cod, quanVendi;

    cout << "Digite o Código do produto" << endl;
    cin >> cod;

    cout << "Informe a quantia que quer vender: ";
    cin >> quanVendi;

    for(int i = 0; i <= c; i++)
    {
        if(verfic[i].codigo == cod)
        {
            if(verfic[i].quantidade > quanVendi)
            {
               verfic[i].quantidade -= quanVendi;
               cout << "Quantidade em estoque: " << verfic[i].quantidade << endl;
            }
            else
            {
                 cout << "Quantidade em estoque insuficiente!!! " << endl;
            }
        }
    }
}
