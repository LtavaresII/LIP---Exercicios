#include <iostream>
#include <cstring>
#define MAX 500
using namespace std;

void RetornarTexto(const string& s);
int main()
{
    string s;
    getline(cin,s);
    RetornarTexto(s);
    return 0;
}
void RetornarTexto(const string& s)
{
    int cont=1;
    for(int i = 0; i<s.size(); i++)
    {
        if (s[i]==' ')
        {
            cont++;
        }
    }
    cout<<"Quantidade de palavras no texto: "<< cont <<endl;
}
