// 银行账户类 （第5版：源文件）
#include<string.h>
#include<iostream>
#include"Account.h"

using namespace std;

Account::Account(string name,string num,long amnt,int y,int m,int d):full_name(name),number(num),crnt_balance(amnt),open(y,m,d){
}

void Account::deposit(long amnt){
    crnt_balance+=amnt;
}

void Account::withdraw(long amnt){
    crnt_balance-=amnt;
}