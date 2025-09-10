// 9.PROGRAM TO READ TIME IN DAY,HR,MIN AND CONVERT IT INTO SECONDS.

#include<stdio.h>
int main(){
    int days,hr,min;
    printf("Enter days=\n");
    scanf("%d",&days);
    printf("Enter hours=\n");
    scanf("%d",&hr);
    printf("Enter minutes=\n");
    scanf("%d",&min);
    long int seconds;
    seconds= (days*24*60*60) + (hr*60*60) + (min*60);
    printf("Time in seconds=%ld",seconds);
    return 0;
}    