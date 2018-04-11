#include <iostream>
#include "math.h"

void calcHora(int a,int &b,int &c, int &d);
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a;
   calcHora(a,b,c,d);
   cout << b << " hora(s)," << c << " minuto(s) e " << d << " segundo(s)" << endl;
    return 0;
}

void calcHora(int a,int &b,int &c, int &d){

b = a/3600;
c = (a - (3600*b))/60;
d = (a - (3600*b) - (c*60));

}
