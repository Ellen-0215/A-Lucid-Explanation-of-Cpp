// 整数数组类IntArray（第4版）的使用例程

#include<iomanip>
#include<iostream>
#include"IntArray.h"

using namespace std;

void f(int size,int num){
    try{
        IntArray x(size);
        for(int i=0;i<num;i++){
            x[i]=i;
            cout<<"x["<<i<<"]="<<x[i]<<'\n';
        }
    }

    catch(IntArray::IdxRngErr& x){
        cout<<"Index overflowed:"<<x.index()<<'\n';
        return;
    }

    catch(bad_alloc){
        cout<<"Memory allocation failed.\n";
        exit(1);
    }
}

int main(){
    int size,num;

    cout<<"Please input the size of the elements:";
    cin>>size;

    cout<<"Please input the count of the numbers:";
    cin>>num;

    f(size,num);

    cout<<"Main function ended.\n";
}