#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int MDC(int n, int n2);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout<<"Digite o primeiro número: " << endl;
    cin>> num1;

    cout<<"Digite o segundo número: " << endl;
    cin>> num2;

    cout<<"MDC: "<<MDC(num1, num2)<<endl;
}

int MDC(int n, int n2)
{
    if(n%n2 == 0)
    {
      return n2;
    }
    else
    {
        return MDC(n2, n%n2);
    }
}

