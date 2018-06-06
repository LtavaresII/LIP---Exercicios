#include <iostream>
#define MAX_N 50
using namespace std;

struct Pessoa
{
    char Nome[MAX_N];
    int Idade;
    float Salario;
};

Pessoa receberDados(Pessoa P[MAX_N],int n);
void exibirDados(Pessoa P[MAX_N],int n);
int main()
{
    Pessoa P[MAX_N];
    int n;
    cout<<"Quantas Pessoas gostaria de adicionar?"<<endl;
    cin>>n;

    receberDados(P,n);
    exibirDados(P,n);
    return 0;
}

Pessoa receberDados(Pessoa P[MAX_N],int n)
{
    cout<<"Informe os dados da Pessoa: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Nome:"<<endl;
        cin.getline(P[i].Nome,MAX_N);
        cout<<"Idade:"<<endl;
        cin>>P[i].Idade;
        cout<<"Salario:"<<endl;
        cin>>P[i].Salario;
    }
    return P[n];
}
void exibirDados(Pessoa P[MAX_N],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nome: "<<P[i].Nome<<endl;
        cout<<"Idade: "<<P[i].Idade<<endl;
        cout<<"Salario: "<<P[i].Salario<<endl;
    }
}
