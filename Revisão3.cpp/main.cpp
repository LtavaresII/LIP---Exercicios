#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Insira um dia da semana: " << endl;
    cin >> num;
    switch(num){
    case 1:{
       cout << "Final de Semana" << endl;
       break;
    }
    case 2:{
       cout << "E um dia util" << endl;
       break;
    }
    case 3: {
       cout << "E um dia util" << endl;
       break;
    }
    case 4:{
       cout << "E um dia util" << endl;
       break;
    }
    case 5:{
       cout << "E um dia util" << endl;
       break;
    }
    case 6:{
       cout << "E um dia util" << endl;
       break;
    }
    case 7:{
       cout << "Final de Semana" << endl;
       break;
    }
    default:{
       cout << "Dia invalido" << endl;
       break;
    }
  }
    return 0;
}
