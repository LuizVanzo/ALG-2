#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int potencia(int n, int n2, int total);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, total=1;

    cout<<"Digite o base: " << endl;
    cin>> num1;

    cout<<"Digite o expoente: " << endl;
    cin>> num2;

    cout<<"MDC: "<<potencia(num1, num2, total)<<endl;
}

int potencia(int n, int n2, int total)
{
    if(n2 == 0)
    {
       return total;
    }
    else
    {
        total*=n;
        n2--;
        return potencia(n, n2, total);
    }
}

