#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int leitura(int &dinheiro);
void calc(int &dinheiro, int &n100, int &n50, int &n20, int &n10, int &n5, int &n2);
int main()
{

    setlocale(LC_ALL, "Portuguese");

    int dindin, nota100, nota50, nota20, nota10, nota5, nota2;

    leitura(dindin);

    calc(dindin, nota100, nota50, nota20, nota10, nota5, nota2);

        cout << "Total notas de 100: " <<nota100 << endl;
        cout << "Total notas de 50: " <<nota50 << endl;
        cout << "Total notas de 20: " <<nota20 << endl;
        cout << "Total notas de 10: " <<nota10 << endl;
        cout << "Total notas de 5: " <<nota5 << endl;
        cout << "Total notas de 2: " <<nota2 << endl;
}

int leitura(int &dinheiro)
{
    do
    {
        cout<< "Qual a quantia que deseja retirar:"<< endl;
        cin >> dinheiro;
        if(dinheiro%2!=0)
        {
            cout << "Valor inválido" << endl;
            cout << "Digite Novamente" << endl;
        }
    }
    while(dinheiro%2!=0);

    return dinheiro;
}

void calc(int &dinheiro, int &n100, int &n50, int &n20, int &n10, int &n5, int &n2)
{

        n100 = dinheiro/100;
        dinheiro = dinheiro%100;

        n50 = dinheiro/50;
        dinheiro = dinheiro%50;

        n20 = dinheiro/20;
        dinheiro = dinheiro%20;

        n10 = dinheiro/10;
        dinheiro = dinheiro%10;

        n5 = dinheiro/5;
        dinheiro = dinheiro%5;

        n2 = dinheiro/2;
        dinheiro = dinheiro%2;
}


