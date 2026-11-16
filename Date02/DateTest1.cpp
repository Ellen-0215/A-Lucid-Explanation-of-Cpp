// 日期类 Date（第2版）的使用例程（确认成员函数 preceding_day 的作用）

#include<iostream>
#include"Date.h"

using namespace std;

int main(){
    Date today;

    cout<<"Today is "<<today<<".\n";
    cout<<"Yesterday is "<<today.preceding_day()<<".\n";
}