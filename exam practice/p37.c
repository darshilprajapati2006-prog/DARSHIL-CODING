#include <stdio.h>

struct student{
    char n[20];
    int r;
    int m;
};

struct student read();
    void display(struct student s);
    int marks(struct student s[], int n);


int main()
{
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("enter student detailes : %d\n",i+1);
        s[i] = read();
    }
    int count;
    count = marks(s,3);
    printf("the no of student got 500 marks : %d\n",count);
    return 0;
}
struct student read(){
    struct student s;
    printf("enter student name : ");
    scanf("%s",s.n);
    printf("enter student roll no : ");
    scanf("%d",&s.r);
    printf("enter student marks : ");
    scanf("%d",&s.m);
    return s;
}
void display(struct student s){
    printf("\n------student information------\n");
    printf("name = %s\n",s.n);
    printf("roll no = %d\n",s.r);
    printf("marks = %d\n",s.m);
}
int marks(struct student s[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i].m > 500)
            count++;
    }
    return count;
}


