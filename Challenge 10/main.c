#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Écrire un programme C permettant de lire la valeur de la température de l'eau et d'afficher son état :

Glace si la température est inférieure à 0, t≤ 0.
Eau si la température est strictement supérieure à 0 et <100, 0 < t ≤ 100.
Vapeur si la température est strictement supérieure à 100, 100 < t.
*/
int main(){
    printf("ce programme vous aide a determiner l'etat de l'eau d'apres ca temperatue \n");
    printf("alors dit mois ca temperature\n");
    
    float t;
    scanf("%f",&t);
    if(t<=0){
        printf("GLace");
    }else if(t<=100 && t!=0){
        printf("Eau");
    }else{
        printf("Vapeur");
    }
    
  return 0;
}
