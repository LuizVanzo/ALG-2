#include <iostream>

using namespace std;

void ler(int &numero);
void verificar(int numero);
int somaAlg(int numero);
void Limpar();

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao, n1, cont =0;

    do
    {
        cout<<"****************************************************"<<endl;
        cout<<"* 0. Sair"<<endl;
        cout<<"* 1. Ler um valor qualquer"<<endl;
        cout<<"* 2. Verifica primo"<<endl;
        cout<<"* 3. Soma algarismo"<<endl;
        cout<<"****************************************************"<<endl;
        cin >> opcao;

        if(opcao < 0 || opcao > 3)
        {
            system("cls");
            cout<<"Opção inválida!!, digite um nova opção"<<endl;
        }

        if(opcao == 1)
        {
            ler(n1);
        }

    }while(opcao != 0);
}

void ler(int &numero)
{
    int opcao, soma;
    cout << "Digite um número" << endl;
    cin >> numero;

    cout<<"****************************************************"<<endl;
    cout<<"* 0. Sair"<<endl;
    cout<<"* 2. Verifica primo"<<endl;
    cout<<"* 3. Soma algarismo"<<endl;
    cout<<"****************************************************"<<endl;
    cin >> opcao;

    if(opcao == 2)
    {
        verificar(numero);
        Limpar();
    }else if(numero > 0 || numero < 999)
    {
        cout << "ERRO número não é valido, escolha outra opção" << endl;
        if(opcao == 3)
        {
            soma =somaAlg(numero);
            cout << "A soma dos Algarimos é: " << soma << endl;
            Limpar();
        }
    }
}

void verificar(int numero)
{
    int totalDiv=0;
    for(int i=1; i<=numero; i++)
    {
        if(numero%i == 0)
            totalDiv++;
    }

    if(totalDiv == 2)
    {
        cout << "É primo" << endl;
        return;
    }
    else
    {
        cout << "Não é primo" << endl;
        return;
    }
}

int somaAlg(int numero)
{
    int soma=0, aux;
    for(int i =3; i > 0; i--)
    {
        aux = numero%10;
        soma+=aux;
        numero/=10;
    }
    return soma;
}
void Limpar()
{
    system("pause");
    system("cls");
}




