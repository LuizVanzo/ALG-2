#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    string segredo,chute;
    int tentativas=0;

    do
    {
        cout << "Digite o texto: "<< endl;
        getline(cin, segredo);
        if(segredo=="Fim")
        {
            cout<< "Fim n�o pode ser utilizado como palavra chave digite novamente"<< endl;
        }
    }while(segredo=="Fim");


    do
    {
        cout << "Tente acertar a palavra: "<< endl;
        getline(cin, chute);
        tentativas++;

        if(segredo == chute)
        {
            cout << "PARABENS VOC� ACERTOU A PALAVRA"<< endl;
            cout << "N�mero de Tentativas: "<< tentativas << endl;
        }
    }while(segredo != chute && chute != "Fim");


}




