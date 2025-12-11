#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[20];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[200];
    }legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;

    godpokemon arceus;
    arceus.specialattack=100;
    strcpy(arceus.legend.ability,"turn anyone to stone");
    arceus.legend.normal.attack=500;


    return 0;
}