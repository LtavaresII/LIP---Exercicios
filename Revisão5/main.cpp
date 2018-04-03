#include <iostream>
#include <math.h>
using namespace std;

int main(){
   double x, sen = 0.0,fat,termo;
   int n = 0;
   cin >> x;
    return 0;
    do{
      fat = 1;
      for(int i = 2;i < 2*n + 1;i++){
        fat=fat*i;
      }
      termo = pow(-1,n)*pow(x,2*n+1)/fat;
      sen = termo;
      n++;
    }while(abs(termo) > 0.00001);
    cout << "Senx =" << sen << endl;
    return 0;
}
