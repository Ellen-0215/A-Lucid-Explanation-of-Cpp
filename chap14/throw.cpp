// 异常的抛出和捕获

#include<new>
#include<iostream>

using namespace std;

class OverFlow{};

int f(int x){
    if(x<0)
        throw "Odd! The value is negative.\n";
    else if(x>30000)
        throw OverFlow();
    else
        return 2*x;
}

int main(){
    int a;
    cout<<"integer:";
    cin>>a;

    try{
        int b=f(a);
        cout<<"This integer times two is "<<b<<".\n";
    }
    catch(const char* str){
        cout<<"Error occured: "<<str;
    }
    catch(OverFlow){
        cout<<"Program overflowed, end it.\n";
        return 1;
    }
}