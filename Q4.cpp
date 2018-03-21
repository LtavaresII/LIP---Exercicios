#include <iostream>

using namespace std;

int main(){

int d, h, x;

cout << "Digite o tempo em horas: " << endl;

cin >> x;

d = x / 24;

h = x % 24;

cout << "O tempo da jornada de trabalho foi de " << d << " dias e " << h << " horas." << endl;

return 0 ;

}
