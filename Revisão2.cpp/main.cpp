#include <iostream>
using namespace std;
int main(){
 int x,y;
    cout << "Informe os numeros: " << endl;
    cin >> x >> y;
 if( x%2 == 0 && y%2 != 0 ){
    cout << "O primeiro n�mero informado � par. O segundo n�mero informado � �mpar" << endl;
    }else if (x%2 != 0 && y%2 == 0){
            cout << "O primeiro n�mero informado � �mpar. O segundo n�mero informado � par" << endl;
            }else if (x%2 == 0 && y%2 == 0){
                     cout << "Ambos os n�meros s�o pares" << endl;
                     }else if (x%2 != 0 && y%2 != 0){
                              cout << "Ambos os n�meros s�o impares" << endl;
                              }

 return 0;
}
