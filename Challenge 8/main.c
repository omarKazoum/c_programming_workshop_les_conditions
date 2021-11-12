#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Ecrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul.
Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro,
alors le nombre est positif.
Si les deux conditions sont fausses, le nombre est égal à zéro.
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
