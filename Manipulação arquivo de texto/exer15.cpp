#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Portuguese");

    string texto, nome;
    int soma=0, ajuste=0;

    cout << "Informe o texto: ";
    getline(cin, nome);

    cout << "Informe o texto: ";
    getline(cin, texto);
    fflush(stdin);

    ofstream cad;
    cad.open(nome, ios::app);

    if(cad.is_open())
    {
        cad << texto << "\n";
        cout << "Nome escrito no arquivo com sucesso" << endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }


    cad.close();


    ifstream ler;
    char vet[50];

    cout << "\n\nConjunto de caracteres \n";
    ler.open(nome, ios::in);
    ler.getline(vet, 50);
    while(!ler.eof())
    {
        ajuste++;
        ler.getline(vet, 50);
    }

    ler.close();

    char c;
    cout << "Letra por letra \n";
    ler.open(nome, ios::in);
    while(ler.get(c))
    {
        cout << c;
        soma++;
    }

    cout << "Número de caracteres no arquivo: " << soma-ajuste << endl;

    ler.close();

}

