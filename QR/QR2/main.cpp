#include <iostream>

using namespace std;

int RetornaBin(int bin,int n);
int main()
{
    int Bin,dec;
    cin>>Bin;
    dec=RetornaBin(Bin,1);
    cout << "Decimal: "<<dec<< endl;
    return 0;
}
int RetornaBin(int bin,int n)
{
    if(bin==0)
    {
        return 0;
    }
    else if(bin==10)
    {
        return 2;
    }
    else
    {
        return (bin%10)*n + RetornaBin(bin/10,n*2);
    }
}
