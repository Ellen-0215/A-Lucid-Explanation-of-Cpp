// 日期类 Date（第3版）的使用例程（确认成员函数 preceding_day 的作用）

#include<iostream>
#include"Date.h"

using namespace std;

int main(){
    Date today;

    cout<<"Today is "<<today<<".\n";
    cout<<"Yesterday is "<<today.preceding_day()<<".\n";
    cout<<"The day before yesterday is "<<today.preceding_day().preceding_day()<<'\n';

    cout<<"Tomorrow is "<<today.following_day()<<'\n';
    cout<<"The day after tomorrow is "<<today.following_day().following_day()<<'\n';

    cout<<"Days after New Year is "<<today.day_of_year()<<".\n";

    cout<<"This year "<<(today.is_leap()?"is a leap year.":"is not a leap year.")<<'\n';

    int y,m,d;

    cout<<"Year:";
    cin>>y;

    cout<<"This year "<<(Date::is_leap(y)?"is a leap year.":"is not a leap year.")<<'\n';
}