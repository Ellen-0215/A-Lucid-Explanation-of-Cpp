// 计数器类Counter（第2版）的使用例程

#include<iostream>
#include"Counter.h"

using namespace std;

int main(){
    int no;
    Counter x;
    Counter y;

    cout<<"Increment:";
    cin>>no;

    for(int i=0;i<no;i++){
        cout<<x++<<' '<<++y<<'\n';
    }

    cout<<"Decrement:";
    cin>>no;

    for(int i=0;i<no;i++){
        cout<<x--<<' '<<--y<<'\n';
    }

    if(!x)
        cout<<"x is zero.\n";
    else
        cout<<"x is not zero.\n";
}