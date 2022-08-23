#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>


using namespace std;

struct dados
{
    char nome[100];
    int codigo;
    int UND;
    float valorVenda;
    int quant;
};

void leitura(dados *pcad, int *pi);
void mostra(dados *pcad, int *pi);
void cod(dados *pcad, int *pi, int *codigo);
void Vender(dados *pcad, int *pi, int *codigo, int *venda);


int main()
{
    setlocale(LC_ALL, "Portuguese");

    dados *cad = new dados[20];
    int menu, indice = -1, numero, quantVenda;
    do
    {
        system("cls");
        cout << "MENU DE OPCOES" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Cadastrar novo item" << endl;
        cout << "2 - Mostrar" << endl;
        cout << "3 - Buscar por codigo " << endl;
        cout << "4 - Vender " << endl;
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

            cout << "Qual o código que você quer buscar?" << endl;
            cin >> numero;

            cod(cad, &indice, &numero);
            getchar();
            system("pause");
            break;
        case 4 :
            system("cls");

            cout << "Qual o código do produto que você quer vender?" << endl;
            cin >> numero;

            cout << "Qual o quantia do produto que você quer vender?" << endl;
            cin >> quantVenda;

            Vender(cad, &indice, &numero, &quantVenda);
            getchar();
            system("pause");
        }

    }
    while(menu != 0);

}

void leitura(dados *pcad, int *pi)
{
    (*pi)++;
    cout << "Informe o nome do produto: ";
    gets(pcad[*pi].nome);
    fflush(stdin);

    cout << "Informe o Codigo: ";
    cin >> pcad[*pi].codigo;
    fflush(stdin);

    cout << "Informe a unidade: ";
    cin >> pcad[*pi].UND;
    fflush(stdin);

    cout << "Informe o valor de venda: ";
    cin >> pcad[*pi].valorVenda;
    fflush(stdin);

    cout << "Informe a Quantidade: ";
    cin >> pcad[*pi].quant;
    fflush(stdin);
}

void mostra(dados *pcad, int *pi)
{
    for(int i = 0; i <= *pi; i++)
    {

        cout << "Nome: " << pcad[i].nome << endl;
        cout << "Código: " << pcad[i].codigo << endl;
        cout << "Unidade: " << pcad[*pi].UND << endl;
        cout << "Valor de Venda: " << pcad[*pi].valorVenda << endl;
        cout << "Quantidade Estoque: " << pcad[*pi].quant << endl;
        cout << "-----------------------------\n\n";
    }
}

void cod(dados *pcad, int *pi, int *codigo)
{
    for(int i = 0; i <= *pi; i++)
    {
        if(pcad[i].codigo == *codigo)
        {
            cout << "Nome: " << pcad[i].nome << endl;
            cout << "Código: " << pcad[i].codigo << endl;
            cout << "Unidade: " << pcad[*pi].UND << endl;
            cout << "Valor de Venda: " << pcad[*pi].valorVenda << endl;
            cout << "Quantidade Estoque: " << pcad[*pi].quant << endl;
            cout << "-----------------------------\n\n";
        }
    }
}

void Vender(dados *pcad, int *pi, int *codigo, int *venda)
{
    for(int i = 0; i <= *pi; i++)
    {
        if(pcad[i].codigo == *codigo)
        {
            if(*venda <= pcad[*pi].quant)
            {
                cout << "Quantia em estoque disponivel!!!" << endl;
                cout << "Venda Efetuada" << endl;
                pcad[*pi].quant -= *venda;
            }else
            {
              cout << "Quantia Inválida" << endl;
            }
        }else
        {
            cout << "Produto não encontrado ou Inexistente" << endl;
        }
    }
}
