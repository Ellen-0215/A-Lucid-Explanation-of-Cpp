// 标识号类IdNo（第1版）的使用例程

#include<iostream>
#include"IdNo.h"

using namespace std;

int main(){
    IdNo a;
    IdNo b;
    IdNo c[4];

    cout<<"a's id:"<<a.id()<<'\n';
    cout<<"b's id:"<<b.id()<<'\n';
    for(int i=0;i<4;i++)
        cout<<"c["<<i<<"]'s id:"<<c[i].id()<<'\n';
}