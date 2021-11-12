#include<stdlib.h>
//#include<stdio.h>
/*
Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.
*/
int main(){
    int a,b;
    printf("entrez deux nobres un par un (clickez entrer chaque foix que vous entrez un)\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("la somme des deux entiers est: %d",a+b);
    if(a==b){
       printf("\nles deux nombres sont identiques alors voici le triple de leur somme: %d",(a+b)*3);
    }

  return 0;
}
