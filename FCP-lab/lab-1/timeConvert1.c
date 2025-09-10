// 8.EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. WRITE A PROGRAM TO CONVERT THIS PERIOD IN YEARS,MONTHS,DAYS,HOURS,MINUTES.

#include<stdio.h>
int main(){
    long int seconds=31558150;
    long int minutes,hours,days,months,years;
    minutes= seconds/60;
    hours= minutes/60;
    days= hours/24;
    months= days/30;
    years= days/365;
    printf("earth takes a period of revolution of 31558150 seconds.\n");
    printf("This period in years,months,days,hours,minutes is=\n");
    printf("Years=%ld\n",years);
    printf("Months=%ld\n",months);
    printf("Days=%ld\n",days);
    printf("Hours=%ld\n",hours);
    printf("Minutes=%ld\n",minutes);
    return 0;
}
