#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void leitura(int tipo, float mens, float valorC);
int main()
{

    setlocale(LC_ALL, "Portuguese");

    int ler;
    float mensal, valorCarro;

    cout<< "Qual o tipo de corre��o:"<< endl;
    cin >> ler;

    cout<< "Quanto deseja aplicar mensamente:"<< endl;
    cin >> mensal;

    cout<< "Qual o valor do carro:"<< endl;
    cin >> valorCarro;

    leitura(ler, mensal, valorCarro);

}

void leitura(int tipo, float mens, float valorC)
{
    float total;
    int mes=0;
    while(valorC > total)
    {
        mes++;
        if(tipo == 1)
        {
           total+= mens + ((mens*0.24)/100.0);
        }else if(tipo == 2)
        {
           total+= mens +((mens*0.32)/100.0);
        }
    }
    cout << "Ser�o necess�rios " << mes << " meses"<< endl;
    cout << "Valor final: " << total << endl;
}




