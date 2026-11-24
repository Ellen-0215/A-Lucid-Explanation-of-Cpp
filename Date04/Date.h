// 日期类 Date（第4版：头文件）

#ifndef ___Class_Date
#define ___Class_Date

#include<string>
#include<iostream>

class Date {
    int y;
    int m;
    int d;
    static int dmax[];
    static int days_of_month(int y,int m);

public:
    Date();
    Date(int yy,int mm=1,int dd=1);

    static bool is_leap(int year){
        return year%4==0&&year%100!=0||year%400==0;
    }
    
    int year() const {return y;}
    int month() const {return m;}
    int day() const {return d;}
    bool is_leap() const {return is_leap(y);}
    Date preceding_day() const; //返回前一天的日期（不支持闰年的处理）
    Date following_day() const;

    int day_of_year() const;
    int day_of_week() const;    //返回星期

    std::string to_string() const;  //返回字符串表示
};

std::ostream& operator<<(std::ostream& s,const Date& x);    //插入符
std::istream& operator>>(std::istream& s,Date& x);  //提取符

#endif