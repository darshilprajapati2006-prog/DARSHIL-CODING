#include<stdio.h>

int main()
{
void table();

table();

}

void table()
{
int n,i,r;
printf("enter a no to know table: ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
r=n*i;
printf("%d*%d=%d\n",n,i,r);
}

}