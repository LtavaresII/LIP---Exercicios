#include <iostream>

using namespace std;

int main(){

float A, r;

const double pi = 3.141592653589793;

cout << "Digite o valor do raio: " << endl;

cin >> r;

A = (r * r) * pi;

std::cout.precision(16);
std::cout << std::fixed <<"A Area do circulo eh: " << A << endl;

return 0 ;
}
