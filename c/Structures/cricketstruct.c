#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        int matches;
        float avg;
        char name[20];
    }cricketer;
    cricketer arr[1];
    int n = 1;
    for(int i=0;i<n;i++){
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].matches);
        scanf("%f", &arr[i].avg);
    }
    for(int i=0;i<n;i++){
        printf("name : %s\n", arr[i].name);
        printf("age : %d\n", arr[i].age);
        printf("matches : %d\n", arr[i].matches);
        printf("avg : %f\n", arr[i].avg);
    }
   return 0; 
}