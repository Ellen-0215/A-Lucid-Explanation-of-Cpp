// 整数数组类IntArray（第1版）的使用例程

#include<iostream>
#include"IntArray.h"

using namespace std;

int main(){
    int n;

    cout<<"Please input the size of the elements:";
    cin>>n;

    IntArray x(n);

    for(int i=0;i<x.size();i++)
        x[i]=i;

    for(int i=0;i<x.size();i++)
        cout<<"x["<<i<<"]="<<x[i]<<'\n';
}