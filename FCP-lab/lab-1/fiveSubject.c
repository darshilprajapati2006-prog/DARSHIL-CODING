/* 2.PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL
AND PERCENTAGE.*/

#include<stdio.h>
int main()
{
    float english,hindi,maths,science,computer,total,percentage;
    printf("enter english marks=\n");
    scanf("%f",&english);
    printf("enter hindi marks=\n");
    scanf("%f",&hindi);
    printf("enter maths marks=\n");
    scanf("%f",&maths);
    printf("enter science marks=\n");
    scanf("%f",&science);
    printf("enter computer marks=\n");
    scanf("%f",&computer);
    
    total= (english + hindi + maths + science + computer);
    percentage= (total /500)*100;
    printf("Total marks=%f\n",total);
    printf("Percentage=%f\n",percentage);
    return 0;
}