#include <iostream>
#define MAX_C 100
#define MAX_L 200
#include <cstring>
using namespace std;

bool PalindromoPerfeito(char V[MAX_L][MAX_C],int n);
int main()
{
    char P[MAX_L][MAX_C];
    int n;
    bool pp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>P[i][j];
        }
    }
    pp=PalindromoPerfeito(P,n);
    if(pp==true)
    {
        cout << "Eh um palindromo" << endl;
    }
    else if(pp==false)
    {
        cout << "Nao eh palindromo" << endl;
    }

    return 0;
}
bool PalindromoPerfeito(char V[MAX_L][MAX_C],int n)
{
    char T[MAX_L][MAX_C];
    bool PP=true;
    int m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            T[j][i]=V[i][j];
        }
    }
    for(int j=0; j<n; j++)
    {
        m=strlen(V[j]);
    }
    if(n==m)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(T[i][j]!=V[i][j])
                {
                    PP=false;
                }
                else
                {
                    PP=true;
                }
            }
        }
    }
    else
    {
        return 0;
    }
    return PP;
}
