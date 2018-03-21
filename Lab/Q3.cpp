#include<iostream>
#include<math.h>
using namespace std;
int main(){
int S, N, R;

cout << "Digite quantos digitos entram : " << endl;
cin >> N;
S = 0;
while(N > 9){
while(N > 0){
 R = N % 10;
 S = S + R;
 N = N / 10;
}
N = S;
S = 0;
}
cout << "A quantidade de digitos presentes são " << S << endl;
 return 0;
}
