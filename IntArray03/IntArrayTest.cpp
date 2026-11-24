// 整数数组类IntArray（第3版）的使用例程

#include<iomanip>
#include<iostream>
#include"IntArray.h"

using namespace std;

int main(){
    int n;

    cout<<"Please input the size of the elements:";
    cin>>n;

    IntArray a(n);

    for(int i=0;i<a.size();i++)
        a[i]=i;

    IntArray b(128);
    IntArray c(256);
    
    cout<<"The size of b and c changed from "<<b.size()<<" and "<<c.size();
    c=b=a;
    cout<<" to "<<b.size()<<" and "<<c.size()<<".\n";

    IntArray d=b;

    cout<<"    a    b    c    d\n";
    cout<<"---------------------\n";
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i]<<setw(5)<<b[i]<<setw(5)<<c[i]<<setw(5)<<d[i]<<'\n';
    }
}