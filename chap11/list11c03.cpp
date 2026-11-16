#include<ctime>
#include<iostream>

using namespace std;

int main(){
    time_t current=time(NULL);
    struct tm* timer=localtime(&current);
    char* wday_name[]={"Sundday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    cout<<"Current date and time is "
        <<timer->tm_year+1900       <<'/'
        <<timer->tm_mon+1           <<'/'
        <<timer->tm_mday            <<'('
        <<wday_name[timer->tm_wday] <<')'
        <<timer->tm_hour            <<':'
        <<timer->tm_min             <<':'
        <<timer->tm_sec             <<".\n";
}