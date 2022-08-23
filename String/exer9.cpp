#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    string texto,texto2, texto3;
    int total=0, total2=0, total3=0;

    cout << "Digite o texto: "<< endl;
    getline(cin, texto);

    cout << "Digite o 2 texto: "<< endl;
    getline(cin, texto2);

    cout << "Digite o 3 texto: "<< endl;
    getline(cin, texto3);

    for(int i=1; i<=texto.size(); i++)
    {
        total++;
    }
    for(int i=1; i<=texto2.size(); i++)
    {
        total2++;
    }
    for(int i=1; i<=texto3.size(); i++)
    {
        total3++;
    }

    if(total > total2 && total > total3)
    {
        if(total3 > total2)
        {
            cout << texto2 << endl;
            cout << texto3 << endl;
            cout << texto << endl;
        }else if(total3 < total2)
        {
            cout << texto3 << endl;
            cout << texto2 << endl;
            cout << texto << endl;
        }
    }else if(total2 > total && total2 > total3)
    {
       if(total > total3)
        {
            cout << texto3 << endl;
            cout << texto << endl;
            cout << texto2 << endl;
        }else if(total < total3)
        {
            cout << textol << endl;
            cout << texto3 << endl;
            cout << texto2 << endl;
        }
    }else if(total3 > total && total3 > total2)
    {
       if(total2 > total)
        {
            cout << texto << endl;
            cout << texto2 << endl;
            cout << texto3 << endl;
        }else if(total2 < total)
        {
            cout << texto2 << endl;
            cout << texto << endl;
            cout << texto3 << endl;
        }
    }


}



