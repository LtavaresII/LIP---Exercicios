#include <iostream>
#include "math.h"
#include <cstdlib>
#include <ctime>
int somaJogardados(int n);
using namespace std;

int main()
{
    int x;
    cout << "Insira o numero de jogadas:" << endl;
    cin >> x;
    somaJogardados(x);
    return 0;
}

int somaJogardados(int n){
 int s,soma = 0;
 for(int i=0;i<n;i++){

  s = 1+rand()%12;
  soma = soma +s;

   }
   cout << soma << endl;
  return 0;
}
