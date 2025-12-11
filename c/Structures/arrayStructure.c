#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
    pokemon arr[3];

    arr[0].hp=10;
    arr[0].speed=20;
    arr[0].attack=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"pikachu");

    arr[1].hp=40;
    arr[1].speed=50;
    arr[1].attack=60;
    arr[1].tier='S';
    strcpy(arr[1].name,"charizard");


    arr[2].hp=70;
    arr[2].speed=80;
    arr[2].attack=90;
    arr[2].tier='B';
    strcpy(arr[2].name,"mewtwo");

    for(int i=0;i<3;i++){
        printf("name : %s\n",arr[i].name);
        printf("attack : %d\n",arr[i].attack);
        printf("hp : %d\n",arr[i].hp);
        printf("speed : %d\n",arr[i].speed);
        printf("tier : %c\n",arr[i].tier);
       
    }

    return 0;
}