#include <stdio.h>
int main()
{
 int arr[10],sum=0;
 printf ("enter the 10 integers:\n");
 for(int i=0;i<10;i++){
     scanf("%d",&arr[i]);
     sum+=arr[i];
 }
 printf("the SUM of 10 integers is = %d\n",sum);
 return 0;
}