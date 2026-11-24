// 初始化和赋值、值传递和引用传递的验证
#include<iostream>

using namespace std;

class Test{
public:
    Test(){
        cout<<"Initiate:Test()\n";
    }

    Test(const Test& t){
        cout<<"Initiate:Test(const Test&)\n";
    }

    Test& operator=(const Test& t){
        cout<<"Assign:Test=Test\n"; return *this;
    }
};

void value(Test a){}

void reference(Test& a){}

int main(){
    Test x;
    Test y=x;
    Test z(x);
    y=x;
    value(x);
    reference(x);
}