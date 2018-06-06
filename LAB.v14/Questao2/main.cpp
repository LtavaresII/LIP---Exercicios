#include <iostream>
#define MAX_N 100
#define MAX 10
#define MAX_NOME 50
#include <cstring>
using namespace std;

struct Filme{
   char Titulo[MAX_N];
   char Ano[MAX];
   char Diretor[MAX_N];
};

int BuscarFilme(Filme v[MAX_N], int n, char chave[MAX_NOME]);
void CadastrarFilme(Filme &F);
void CadastrarVarios(Filme v[MAX_N],int n);
void imprimir(Filme &F);
int main()
{
    Filme F[MAX_N];
    char chave[MAX_NOME];
    int n,r;
    cout<<"Quantos filmes deseja armazenar?:"<<endl;
    cin>>n;
    CadastrarVarios(F,n);
    cout<<"Qual diretor do filme que gostaria de ver?:"<<endl;
    cin.getline(chave,MAX_N);
    r=BuscarFilme(F,n,chave);
    cout<<r<<endl;
    if(r==-1){
    cout<<"Diretor não encontrado"<<endl;
    }else{
        for(int i=0;i<n;i++){
            imprimir(F[r]);
        }
    }
    return 0;
}
void CadastrarFilme(Filme &F){
       cout<<"Quais Filmes?"<<endl;
       cin.getline(F.Titulo,MAX_N);
       cin>>F.Ano;
       cin.ignore();
       cin.getline(F.Diretor,MAX_N);
}
void CadastrarVarios(Filme v[MAX_N],int n){
    cin.ignore();
    for(int i=0;i<n;i++){
       CadastrarFilme(v[i]);
    }
}
void imprimir(Filme &F){
   cout<<F.Titulo<<endl;
   cout<<F.Ano<<endl;
   cout<<F.Diretor<<endl;
}
int BuscarFilme(Filme F[MAX_N], int n, char chave[MAX_NOME]){

   return -1;
}
