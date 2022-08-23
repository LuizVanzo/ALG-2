#include<iostream>
#include <iomanip>
#include<cstdio>
#include<cstdlib>


using namespace std;

float salarioF(float salario, float vendas, float porComissao, float inss);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont=0;
    float salario, vendas, porComissao=5.0, inss=11.0, salariof;

    cout << "Digite seu Salario:" << endl;
    cin >> salario;

    cout << "Digite suas vendas:" << endl;
    cin >> vendas;

    salariof = salarioF(salario, vendas, porComissao, inss);

    cout << fixed;
    cout.precision(2);
    cout << "Salário Final "<<salarioF(salario, vendas, porComissao, inss) << endl;

    while(salariof >= 1100)
    {
        salariof-=1100;
        cont++;
    }
    cout << "O salário é equivalente a "<<  cont  << " salário mínimo." << endl;

}

float salarioF(float salario, float vendas, float porComissao, float inss)
{
    float salariofinal, comiVendas;

    comiVendas = ((vendas*porComissao)/100.0);
    salario +=comiVendas;
    salariofinal = salario-((salario*inss)/100.0);
    return salariofinal;

}
