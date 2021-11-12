#include <stdio.h>

int main(){
    int an,mois,jour,heure,minute,sec;
    printf("entrer un an :");
    scanf("%d",&an);
    mois = an*12;
    jour=an*365;
    heure= jour*24;
    minute= heure*60;
    sec=minute*60;
    printf("nombre de mois :%d ,jours : %d , heures :%d ,minutes :%d ,sec :%d ",mois,jour,heure,minute,sec);
}

