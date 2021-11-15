#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Ecrivez un programme C piloté par menu pour convertir une année donnée en,

Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire).
1 an = 365 jours 1 mois = 30 jours
*/
int main(){
    printf("entrez une année\n");
	int year;
	scanf("%d",&year);
    int mois,jours,heurs,minutes,seconds;
	mois=12;
    
	if(year%4==0){
      jours=366;
	}else{
	   jours=365;
	}
	heurs=jours*24;
    minutes=heurs*60;
    seconds=minutes*60;
    printf("Bonjour saviez vous que une annee contient: %d mois\n%djours  \n%dheurs \n%dminutes \n%dseconds",mois,jours,heurs,minutes,seconds);
    
  return 0;
}
