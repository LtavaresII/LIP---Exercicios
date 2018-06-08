#include <iostream>
#define MAX 500
using namespace std;

struct Area{
  int x[MAX];
  int y[MAX];
  int n;
  float A;
};
int main()
{
   Area P;
   cin>>P.n;
   for(int i=0;i<P.n;i++){
      cin>>P.x[i];
   }
   for(int i=0;i<P.n;i++){
      cin>>P.y[i];
   }
   for(int i=0;i<P.n-1;i++){
      P.A=((P.x[i+1]-P.x[i])*(P.y[i+1]-P.y[i]))/2;
   }
      cout << "Area do Poligono: "<<abs(P.A)<< endl;
    return 0;
}
