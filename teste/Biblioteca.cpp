#include"Biblioteca.h"
#include<iostream>
using namespace std;
int main(){
 int num, divisor;
 divisor = 2;
 bool primo;
 primo = true;
 cin >> num;
 while(divisor < num){
    if(num % divisor == 0){
        primo = false;
        break;
    }
    divisor++;
 }
 if(primo == true){
    num = (2*num) + 1;
 }else{
  num = 0;
 }
 calcularPrimo(num);
 return 0;
}
