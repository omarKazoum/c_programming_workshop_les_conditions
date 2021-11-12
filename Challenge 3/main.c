#include<stdlib.h>
//#include<stdio.h>
/*
    Ecrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair
*/
int main(){
    int a;
    printf("entrez un nombre\n");
    scanf("%d",&a);
    printf("ce nombre est %spair",(a%2==0?"":"im"));

  return 0;
}
