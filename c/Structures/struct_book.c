#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        float price;
        int pages;
    }a,b,c;
    
    a.pages=650;
    a.price=350.67;
    strcpy(a.name, "maths");

    printf("%d\n",a.pages);

    b.pages=464;
    b.pages=464;
    b.price=300.45;
    strcpy(b.name, "physics");
    printf("%s\n", b.name);

    c.pages=400;
    c.pages=400;
    c.price=250.87;
    strcpy(c.name, "chemistry");
    printf("%f",c.price);



    return 0;
}