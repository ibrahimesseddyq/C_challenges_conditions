#include <stdio.h>

int main(){
    char str ;
    printf("entrer un lettre :");
    scanf("%c",&str);
    str > 64 && str < 91 ? printf("Majuscule") : printf("non Majuscule");
    
}

