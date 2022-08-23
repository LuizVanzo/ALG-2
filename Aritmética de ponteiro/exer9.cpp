#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
void leitura(int **n);
void primo(int ***n2);
void perfeito(int ****n3);
void fatorial(int *****n4);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, *pnum;
    *pnum = num;

    leitura(&pnum);
}

void leitura(int **n)
{
    cout << "Digite um n�mero" << endl;
    cin >> **n;
    primo(&n);
}

void primo(int ***n2)
{
    int totalDiv=0;
    for(int i=1; i<=***n2; i++)
    {
        if(***n2%i == 0)
            totalDiv++;
    }

    if(totalDiv == 2)
    {
        cout<<"O n�mero � primo"<<endl;
    }
    else
    {
        cout<<"O n�mero n�o � primo"<<endl;
    }
    perfeito(&n2);
}

void perfeito(int ****n3)
{
    int soma = 0;
    for (int i = 1; i < ****n3; i++)
    {
        if (****n3 % i == 0)
        {
            soma += i;
        }
    }
    if(soma == ****n3)
    {
        cout<<"N�mero Perfeito"<<endl;
    }
    else
    {
        cout << "N�mero Imperfeito"<<endl;
    }
    fatorial(&n3);
}

void fatorial(int *****n4)
{
    int soma =*****n4;
    for (int i = 1; i < *****n4; i++)
    {
        soma*= (*****n4 - i);
    }
    cout << "O fatorial de " << *****n4 << " �: " << soma << endl;
}

