#include <iostream>
#include "math.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int computador;
    int x,cont=0;
    cout << "Insira o numero entre 50 e 500:" << endl;
    cin >> x;
    computador = 50+rand()%500;
    cout << computador << endl;
    while ( x >= 50 && x <= 500)
    {
        cont++;
        if(x < computador)
        {
            cout << "Errou! "<< x << " e menor" << endl;
            cin >> x;
        }
        else if(x > computador)
        {
            cout << "Errou! "<< x << " e maior" << endl;
            cin >> x;
        }
        else
        {
            cout << "Numero correto!" << endl;
            cout << "Rodadas: " << cont << endl;
            break;
        }
    }
    return 0;
}
