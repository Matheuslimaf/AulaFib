#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

int main()
{
    int op,op1,op2,player1,player2;
    cout << "1-Iniciar BlackJack" << endl;
    cout << "0-SAIR" << endl;
    cin  >> op;
    system("cls");
    while(op!=0){
        while(op1!=2){
            cout << "PLAYER 1 "<< endl;
            cout << "1-Pegar uma Carta." << endl;
            cout << "2-PARAR" << endl;
            cin >>op1;
            system("pause");
            system("cls");
            break;
        }
        while(op2!=2){
            cout << "PLAYER 2 "<< endl;
            cout << "1-Pegar uma Carta." << endl;
            cout << "2-PARAR" << endl;
            cin >>op2;
            system("pause");
            system("cls");
            break;
        }

    }
    return 0;
}
