#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Ecrivez �crire un programme C qui d�cide la mention d�un �l�ve dans une �cole � partir de sa moyenne. Cet �l�ve doit avoir:

la mention �passable� pour une moyenne sup�rieure ou �gale � 10 et inf�rieure � 12;
la mention �Assez bien � pour une moyenne sup�rieure ou �gale � 12 et inf�rieure � 14;
la mention �Bien� pour une moyenne sup�rieure ou �gale � 14 et inf�rieure � 16;
la mention �Tr�s bien� pour une moyenne sup�rieure ou �gale � 16.
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
