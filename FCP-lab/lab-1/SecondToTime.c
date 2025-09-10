// 11.PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.

#include<stdio.h>
int main(){
    long int total_seconds;
    printf("Enter total seconds=\n");
    scanf("%ld",&total_seconds);
    long int days,hr,min,seconds;
    days= total_seconds/(24*60*60);
    hr= (total_seconds%(24*60*60))/(60*60);
    min= (total_seconds%(60*60))/60;
    seconds= total_seconds%60;
    printf("Time in days,hr,min,seconds is=\n");
    printf("Days=%ld\n",days);
    printf("Hours=%ld\n",hr);
    printf("Minutes=%ld\n",min);
    printf("Seconds=%ld\n",seconds);
    return 0;
}   
