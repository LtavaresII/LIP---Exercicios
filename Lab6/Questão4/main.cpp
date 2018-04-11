#include <iostream>
#include "math.h"

void invert(int a, int &b,bool &c);
using namespace std;

int main()
{
    int a,b;
    bool c;
    cin >> a;
    invert(a,b,c);
    if(c)
    {
        cout << b << " Par" << endl;
    }
    else
    {
        cout << b << " Impar" << endl;
    }
    return 0;
}

void invert(int a, int &b, bool &c)
{
    c = 1;
    while(a>0)
    {
        b= b*10+a%10;
        a/=10;
    }
    c = b%2==0;

}
