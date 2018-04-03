#include <iostream>
using namespace std;
int main(){
 int x,y;
    cout << "Informe os numeros: " << endl;
    cin >> x >> y;
 if( x%2 == 0 && y%2 != 0 ){
    cout << "O primeiro número informado é par. O segundo número informado é ímpar" << endl;
    }else if (x%2 != 0 && y%2 == 0){
            cout << "O primeiro número informado é ímpar. O segundo número informado é par" << endl;
            }else if (x%2 == 0 && y%2 == 0){
                     cout << "Ambos os números são pares" << endl;
                     }else if (x%2 != 0 && y%2 != 0){
                              cout << "Ambos os números são impares" << endl;
                              }

 return 0;
}
