#include <stdio.h>

int main(){
    char cha;
    printf("entrer une lettre : ");
    scanf("%c",&cha);
    switch(cha)
    {
        case 'a' :
            printf("Voyelle");
            break;
        case 'e' :
            printf("Voyelle");
            break;
        case 'u' :
            printf("Voyelle");
            break;
        case 'i' :
            printf("Voyelle");
            break;
        case 'o' :
            printf("Voyelle");
            break;
        default :
            printf("lettre");
            break;
    }
}

