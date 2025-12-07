#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello world";
    int n=sizeof(str)/sizeof(str[0]);
    printf("%d\n",n);
    printf("%s\n",str);
    puts(str);
    puts("the reverse string is : ");
    int i=0;
    int j=n-2;
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("%s\n",str);
    printf("\n\n");

    char arr[45];
    // fgets(arr, sizeof(arr), stdin);
    scanf("%[^\n]s",arr);
    puts(arr);
    return 0;

}