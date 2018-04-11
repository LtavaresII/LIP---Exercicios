#include <iostream>
#include "math.h"

void swap(int &a, int &b);
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << "Antes: " << "a= "<< a << "," << "b= " << b << endl;
    swap(a,b);
    cout << "Depois: " << "a= "<< a << "," << "b= " << b << endl;
    return 0;
}

void swap(int &a, int &b){
    int aux=a;
    a=b;
    b=aux;
}
