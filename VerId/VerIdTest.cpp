// 标识号类IdNo（第1版）的使用例程

#include<iostream>
#include"VerId.h"

using namespace std;

int main(){
    VerId a;
    VerId b;

    cout<<"a's id:"<<a.id()<<'\n';
    cout<<"b's id:"<<b.id()<<'\n';
    cout<<"The number of created objects:"<<VerId::counter<<'\n';
    cout<<"The number of created objects:"<<a.counter<<'\n';
    cout<<"The number of created objects:"<<b.counter<<'\n';
}