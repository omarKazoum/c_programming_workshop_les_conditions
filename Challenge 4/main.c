#include<stdlib.h>
//#include<stdio.h>
/*
Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.

*/
int main(){
    char c;
    printf("entrez un caractere\n");
    scanf("%c",&c);
    printf("%c",c);
    char voy[]=" est une voyelle !";
    char consone[]=" est une consone";
    switch(c){
    case 'a':
        printf("%s",voy);break;
    case 'e':
        printf("%s",voy);break;
    case 'i':
        printf("%s",voy);break;
    case 'o':
        printf("%s",voy);break;
        case 'u':
        printf("%s",voy);break;
    case 'A':
        printf("%s",voy);break;
    case 'E':
        printf("%s",voy);break;
    case 'I':
        printf("%s",voy);break;
    case 'O':
        printf("%s",voy);break;
        case 'U':
        printf("%s",voy);break;

    default:printf("%s",consone);break;
    }

  return 0;
}
