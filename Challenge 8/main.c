#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Ecrivez un programme pour v�rifier si le nombre donn� est positif, n�gatif ou nul.
Si le nombre est inf�rieur � z�ro, alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro,
alors le nombre est positif.
Si les deux conditions sont fausses, le nombre est �gal � z�ro.
*/
int main(){
    printf("se programme vous aide a savoir si un nombre est positif ou negatif ou bien null\n entrez un nombre\n");
    float nbr;
    scanf("%f",&nbr);
    printf("\n");
    if(nbr<0){
        printf("ce nombre est negatif!");
    }else if(nbr>0){
        printf("ce nombre est positif");
    }else{
        printf("ce nombre est null");
    }

  return 0;
}
