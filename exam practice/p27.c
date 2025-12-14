#include <stdio.h>

struct xx
{
    int x;
    char name[10];
};

int main()
{
    struct xx obj = {3, "hello"};
    struct xx *s = &obj;

    printf("%d\n", s->x);
    printf("%s", s->name);

    return 0;
}