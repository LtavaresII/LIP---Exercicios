#include<iostream>
using namespace std;
int main(){
int Num, N = 0;
float Media, Soma = 0.0;

cout << "Digite quantos numeros entram : " << endl;
cin >> N;
do{
cout << "Digite os numeros :" << endl;
cin >> Num;

Soma = Soma + Num;


 Media = Soma / N;
} while( Num != 0 );

 cout << "A media aritimetica é " << Media << endl;

 return 0;
}
