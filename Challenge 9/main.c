#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Ecrivez Écrire un programme C qui décide la mention d’un élève dans une école à partir de sa moyenne. Cet élève doit avoir:

la mention «passable» pour une moyenne supérieure ou égale à 10 et inférieure à 12;
la mention «Assez bien » pour une moyenne supérieure ou égale à 12 et inférieure à 14;
la mention «Bien» pour une moyenne supérieure ou égale à 14 et inférieure à 16;
la mention «Très bien» pour une moyenne supérieure ou égale à 16.
*/
int main(){
    printf("ce programme vous aide a determiner la mention d'un eleve a partir de sa note \n");
    printf("entrez la note de votre eleve\n");
    float note;
    scanf("%f",&note);
    if(note<10){
        printf("pas de mention");
    }else if(note<12){
        printf("la mention est passable");
    }else if(note<14){
        printf("la mention Assez Bien");
    }else if(note<16){
        printf("la mention est Bien");
    }else{
        printf("la mention est tres bien");
    }

  return 0;
}
