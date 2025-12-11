#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
        a.day=12;
        a.month=7;
        a.year=2006;
        b.day=12;
        b.month=7;
        b.year=2006;

        bool flag=true;
        if(a.day!=b.day) flag=false;
        if(a.month!=b.month) flag=false;
        if(a.year!=b.year) flag=false;

        if(flag==true) printf("date is matched");
        else printf("date is not matched");
    return 0;
}