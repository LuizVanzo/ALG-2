#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
float harmonico(float n, float cont, float soma);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1;

    cout<<"Digite o número: " << endl;
    cin>> num1;

    cout<< "Número harmonico: " << harmonico(num1, 2, 1);
}

float harmonico(float n, float cont, float soma)
{
    if(n+1 == cont)
    {
        return soma;
    }
    else if(n+1 > cont)
    {
        soma += 1/cont;
        cont++;
        return harmonico(n, cont, soma);
    }

}

