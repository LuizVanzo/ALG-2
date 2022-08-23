#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void leitura(int &baseM, int &baseN, float &altura);
int calcula(int baseM, int baseN, float altura);
void mostra(float resultado);

int main()
{

   setlocale(LC_ALL, "Portuguese");

   int basemaior, basemenor;
   float alt, recebe;


   leitura(basemaior, basemenor, alt);

   recebe = calcula(basemaior, basemenor, alt);

   mostra(recebe);

}

void leitura(int &baseM, int &baseN, float &altura)
{
     cout<< "Qual a Base maior:"<< endl;
     cin >> baseM;

     cout<< "Qual a Base menor:"<< endl;
     cin >> baseN;

     cout<< "Qual a Altura:"<< endl;
     cin >> altura;
}

int calcula(int baseM, int baseN, float altura)
{
    float calc;
    calc = ((baseM + baseN)* altura)/2.0;
    return calc;
}

void mostra(float resultado)
{
    cout << "Resultado:" << resultado << endl;
}

