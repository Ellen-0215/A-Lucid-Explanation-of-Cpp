// 银行账户类（第5版）的使用例程
#include<iostream>
#include"Account.h"

using namespace std;

int main(){
    Account Alice("Alice","12345678",1000,2125,1,24);
    Account Bob("Bob","87654321",200,2123,7,15);

    Alice.withdraw(200);
    Bob.deposit(100);

    cout<<"Alice's Account\n";
    cout<<"Name="<<Alice.name()<<'\n';
    cout<<"Number="<<Alice.no()<<'\n';
    cout<<"Remain="<<Alice.balance()<<'\n';
    cout<<"Opening Date="<<Alice.opening_date()<<'\n';

    cout<<"\nBob's Account\n";
    cout<<"Name="<<Bob.name()<<'\n';
    cout<<"Number="<<Bob.no()<<'\n';
    cout<<"Remain="<<Bob.balance()<<'\n';
    cout<<"Opening Date="<<Bob.opening_date().year()<<'/'
    <<Bob.opening_date().month()<<'/'
    <<Bob.opening_date().day()<<'\n';
}