#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Écrivez un programme C qui permet de calculer les solutions possibles d’une équation 2ème degré.

*/
int main(){
    // on sait q'une equation de deuxieme degree peut etre ecrit comme AxX²+Bx+C=0
    printf("cette cette utilite va vous aider a trouver les soulutions d'une equation de deuxieme degree\n");
    printf("on sait q'une equation de deuxieme degree peut etre ecrit comme AxX²+BxX+C=0\n");
    printf("alors pour vous aider veillez entrez A et B puis C dans  cette ordre");
    float a,b,c;
    float delta;
    scanf("%f %f %f",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    if(delta<0){
        printf("\ncette equation a malhreusement pas de sollution");
    }
    else if(delta==0){
        printf("\ncette equation a une seule solution: x=%f",(-1/(2*a)));
    }else{
        float x1=(-b-sqrt(delta))/(2*a);
        float x2=(-b+sqrt(delta))/(2*a);
        printf("\ncette equation a deux solutions: x=%f et x=%f\n",x1,x2);
        
    }
    
    
  return 0;
}
