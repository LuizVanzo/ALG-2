#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostra(int m[][5]);
void gerar(int m[][5]);
void Limpar();
int verifica(int m[][5]);
void secundaria(int m[][5]);
void maior(int m[][5]);


main()
{
    setlocale(LC_ALL, "portuguese");

    int mat[5][5], opcao;

    do
    {
        cout << "#############MENU###############" << endl;
        cout << "# 0 - Sair     " << endl;
        cout << "# 1 - Gerar                 " << endl;
        cout << "# 2 - Mostrar               " << endl;
        cout << "# 3 - Maior                 " << endl;
        cout << "# 4 - Verificar Simetria    " << endl;
        cout << "# 5 - Diagonal Secundária    " << endl;
        cout << "################################" << endl;
        cin >> opcao;
        fflush(stdin);

        if(opcao == 1)
        {
            gerar(mat);
            Limpar();
        }
        else if(opcao == 2)
        {
            mostra(mat);
            Limpar();
        }
        else if(opcao == 3)
        {
            maior(mat);
        }
        else if(opcao == 4)
        {
            if(verifica(mat) == 0)
            {
                cout << "Matriz Simétrica" << endl;
            }
            else
            {
                cout << "Não é uma matriz Simétrica" << endl;
            }
            Limpar();
        }
        else if(opcao == 5)
        {
            secundaria(mat);
        }

    }
    while(opcao != 0);


}

void gerar(int m[][5])
{
    srand(time(NULL));
    int aux, verifica, lin, col;
    for(int l=0; l < 5; l++)
    {
        for(int c=0; c < 5; c++)
        {
            aux = rand() % 101;
            if(l == 0 && c == 0)
                m[l][c] = aux;
            else
            {

                verifica = 0;
                lin = l;
                col = c;

                if(c == 0)
                {
                    col = 4;
                    lin--;
                }
                else
                    col--;
                while(verifica == 0)
                {

                    if(m[lin][col] == aux)
                    {
                        verifica = 1;
                        break;
                    }
                    else
                    {

                        col--;
                        if(col < 0)
                        {
                            col = 4;
                            lin--;
                        }
                    }
                    if(lin < 0)
                        break;
                }

                if(verifica == 0)
                    m[l][c] = aux;
                else
                {
                    if(c == 0)
                    {
                        c = 4;
                        l--;
                    }
                    else
                        c--;
                }

            }

        }
    }
}


void mostra(int m[][5])
{
    int l,c;
    for(l = 0; l < 5; l++)
    {
        for(c = 0; c < 5; c++)
            cout << m[l][c] << "\t";
        cout << "\n";
    }
}


int verifica(int m[][5])
{
    int l,c, flag = 0;
    for(l = 0; l < 5; l++)
    {
        for(c = 0; c < 5; c++)
        {
            if(m[l][c] == m[c][l])
                flag++;
        }
    }
    return flag;
}
void secundaria(int m[][5])
{
    for(int l = 0; l < 5; l++)
    {
        for(int c = 0; c < 5; c++)
        {
            if(l + c == 5-1)
            {
                cout << "Diagonal Secundária "<< l+1 << " elemento: "<< m[l][c] << endl;
            }
        }
    }
}

void maior(int m[][5])
{
    int maior, cont=0;
    while(cont < 5)
    {
        for(int c = 0; c < 5; c++)
        {
            if(c == cont)
            {
                maior = m[cont][c];
            }
            if(m[cont][c] > maior)
            {
                maior = m[cont][c];
            }
        }
        cout << "Maior elemento da "<< cont <<" linha" << maior << endl;
        cont++;
    }
}

void Limpar()
{
    system("pause");
    system("cls");
}
