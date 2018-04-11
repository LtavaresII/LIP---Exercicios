#include <iostream>
#include "math.h"

int triplicaPorValor(int y);
void triplicaPorReferencia(int &y);
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << triplicaPorValor(x) << endl;
    triplicaPorReferencia(x);
    cout << x << endl;

    return 0;
}

int triplicaPorValor(int y){
    y = y*3;
}

void triplicaPorReferencia(int &y){
    y = y*3;
}
