#include <stdio.h>

int main()
{
    int nb;
    int a;
    
    printf("Entrer un nombre :");
    scanf("%d",&nb);
    a = nb % 2;
    if(a == 0)
        printf("Ce nombre %d est pair.",nb);
    else if(a == 1)
        printf("Ce nombre %d est impair.",nb);
}

