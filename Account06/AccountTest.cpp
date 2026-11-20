// 银行账户类（第5版）的使用例程
#include<iostream>
#include"Date.h"
#include"Account.h"

using namespace std;

int main(){
    Account Alice("Alice","12345678",1000,Date(2125,1,24));
    string dw[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    cout<<"Alice's Account\n";
    cout<<"Name="<<Alice.name()<<'\n';
    cout<<"Number="<<Alice.no()<<'\n';
    cout<<"Remain="<<Alice.balance()<<'\n';
    cout<<"Opening Date="<<Alice.opening_date();
    cout<<"("<<dw[Alice.opening_date().day_of_week()]<<")\n";
}