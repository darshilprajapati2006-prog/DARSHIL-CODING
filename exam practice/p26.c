#include<stdio.h>
int fact(int x);
int main()
{
int n;

printf("enter number: ");
scanf("%d",&n);
if(n<0)
printf("invalid number");
else
printf("%d!=%d",n,fact(n));

}
int fact(int x)
{
if(x==0)
return 1;
else
return(x*fact(x-1));
}