#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
void fibonacci(int t1, int t2, int qtd, int cont);

int main()
{
    int num = 20;

    cout << "Os " << num << "  primeiros termos de fibonacci: " << endl;
    fibonacci(0, 1, num, 1);

}

void fibonacci(int t1, int t2, int qtd, int cont)
{
    if(cont <= qtd)
    {
        cout << t2 << ", ";
        cont++;
        fibonacci(t2, t1 + t2, qtd, cont);
    }
}




