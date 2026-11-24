// 标识号类IdNo（第2版）的使用例程

#include<iostream>
#include"IdNo.h"

using namespace std;

int main(){
    IdNo a;
    IdNo b;

    cout<<"a's id:"<<a.id()<<'\n';
    cout<<"b's id:"<<b.id()<<'\n';
    cout<<"The currently max id:"<<IdNo::get_max_id()<<'\n';
}