// 15.PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.

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
    printf("You scored %f",percentage);
    printf("\n");
    if (percentage>=60)
        {printf("DIVISION = FIRST\n");}
    else if (percentage>=50)
        {printf("DIVISION = SECOND\n");}
    else if (percentage>=40)
        {printf("DIVISION = THIRD\n");}
    else 
        {printf("DIVISION = FAIL\n");}
    
    
    return 0;
}