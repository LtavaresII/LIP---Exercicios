#include <iostream>
#include "math.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int valor1=0,valor2=0,cont1=0,cont2=0,cont=0;
    srand(time(NULL));
    while(cont1 < 5 && cont2 < 5 ){
       valor1 = 1+rand()%6;
       valor2 = 1+rand()%6;
       if(valor1 > valor2){
            cont1++;
       }else if(valor2 > valor1){
            cont2++;
       }
       cont++;
   }
    if(cont1 == 5){

    cout << "Jogador um ganhou!" << endl;
    cout << "Rodadas: " << cont << endl;

    }else if(cont2 == 5){

    cout << "Jogador dois ganhou!" << endl;
    cout << "Rodadas: " << cont << endl;

    }else{

    cout << "Empate!" << endl;
    cout << "Rodadas: " << cont << endl;

    }


    return 0;
}
