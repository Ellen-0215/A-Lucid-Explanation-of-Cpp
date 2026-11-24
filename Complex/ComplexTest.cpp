// 复数类Complex的使用例程

#include<iostream>
#include"Complex.h"

using namespace std;

int main(){
    double re,im;

    cout<<"The real part of a:";
    cin>>re;
    cout<<"The imaginary part of a:";
    cin>>im;
    Complex a(re,im);

    cout<<"The real part of b:";
    cin>>re;
    cout<<"The imaginary part of b:";
    cin>>im;
    Complex b(re,im);

    Complex c=-a+b;

    b+=2.0;
    c-=Complex(1.0,1.0);
    Complex d(b.imag(),c.real());

    cout<<"a="<<a<<'\n';
    cout<<"b="<<b<<'\n';
    cout<<"c="<<c<<'\n';
    cout<<"d="<<d<<'\n';
}