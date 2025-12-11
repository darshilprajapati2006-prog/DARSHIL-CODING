#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=70;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    printf("%d\n",pikachu.speed);

    struct pokemon charizard;
    charizard.attack = 60;
    charizard.hp=65;
    charizard.speed=130;
    charizard.tier='S';

    printf("%c",charizard.tier);
    
    return 0;
}