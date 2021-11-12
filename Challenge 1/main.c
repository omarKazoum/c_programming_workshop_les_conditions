#include<stdlib.h>
//#include<stdio.h>
/*
    Algorithme CHALLENGE_1
Variables  nbr : Entier
Début
  printf (‘donner un entier :’)
  Lire (nbr)
  Si (nbr<0) Alors
    printf(‘le nbr’,nbr,’ est negatif’)
  Sinon
    Si (nbr>0)Alors
      printf(‘le nbr’,nbr,’ est positif’)
    Sinon
      printf(‘le nbr’,nbr,’ est nul’)
    Finsi
  Finsi
Fin
*/
int main(){
  int nbr;
  printf("donner un entier");
  scanf("%d",&nbr);
  if(nbr<0){ 
    printf("le nbr %d est negatif",nbr);
  }
  else{
    if(nbr>0){
             printf("le nbr %d est positif",nbr);
            }
    else{
          printf("le nbr %d est nul",nbr);
      }
  }
  return 0;
}
