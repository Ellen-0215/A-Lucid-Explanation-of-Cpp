// 日期类 Date（第3版：头文件）

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include<iostream>

class Date {
    int y;
    int m;
    int d;

public:
    Date();
    Date(int yy,int mm=1,int dd=1);

    int year() const {return y;}
    int month() const {return m;}
    int day() const {return d;}

    Date preceding_day() const; //返回前一天的日期（不支持闰年的处理）

    int day_of_week() const;    //返回星期

    std::string to_string() const;  //返回字符串表示
};

std::ostream& operator<<(std::ostream& s,const Date& x);    //插入符
std::istream& operator>>(std::istream& s,Date& x);  //提取符

#endif