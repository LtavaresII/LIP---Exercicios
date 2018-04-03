#include <iostream>

using namespace std;

int main(){
    int valor,maior,maior2;
    maior = -1000000000;
    maior2 = -1000000000;
    cout << "Informe a sequencia: " << endl;
    for(int i = 1; i <= 10;i++){
         cin >> valor;
        if(valor > maior){
            maior = valor;
        }else if(valor != maior && valor > maior2){
            maior2 = valor;
        }
    }
    cout << "Maior: " << maior << endl;
    cout << "Segundo Maior: "<< maior2 << endl;
    return 0;
}
