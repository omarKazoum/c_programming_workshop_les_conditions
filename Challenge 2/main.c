#include<stdlib.h>
//#include<stdio.h>
/*
    Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)

    La formule : C = (F-32)/1.8
*/
int main(){
    float f;
    printf("entrez la temerature en fahrenhite\n");
    scanf("%f",&f);
    float c=(f-32)/1.8;
    printf("c'est %f degrees celcius\nil fait  ",c);
    if(c<5){
        printf("tres froid");
    }else if(c<25){
            printf("froid");
    }else if(c<32){
            printf("chaud");
    }else{
            printf("tres chaud");
    }
  return 0;
}
