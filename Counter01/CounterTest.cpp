// 计数器类Counter（第1版）的使用例程

#include<iostream>
#include"Counter.h"

using namespace std;

int main(){
    int no;
    Counter x;

    cout<<"Current counter:"<<x.value()<<'\n';

    cout<<"Increment:";
    cin>>no;

    for(int i=0;i<no;i++){
        x.increment();
        cout<<x.value()<<'\n';
    }

    cout<<"Decrement:";
    cin>>no;

    for(int i=0;i<no;i++){
        x.decrement();
        cout<<x.value()<<'\n';
    }
}