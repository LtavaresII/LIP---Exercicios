#include<iostream>
using namespace std;
int main(){
float produt, valor;

cin >> produt;

valor = produt < 20 ? valor = produt + produt * 0.80 : valor = produt + produt * 0.40;

cout << "O valor do produto é " << valor << endl;

 return 0;
}
