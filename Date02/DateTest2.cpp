// 日期类 Date（第2版）的使用例程（确认成员函数 to_string 的作用）
#include<iostream>
#include"Date.h"

using namespace std;

int main(){
    const Date birthday(1963,11,18);
    Date day[3];

    cout<<"birthday = "<<birthday<<'\n';
    cout<<"The string form of birthday:\""<<birthday.to_string()<<"\"\n";

    for(int i=0;i<3;i++)
        cout<<"The string form of day["<<i<<"]:\""<<day[i].to_string()<<"\"\n";
}