#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main ()
 {
 	int annee ;
 	 printf("entre l'annee : \n");
 	 scanf("%d",&annee);
 	 
 	 
 	 if( annee%4==0 && annee%100!=0 )
 	 {
 	 	printf("annee bissextile\n");
 	 	printf(" 12 Mois\n");
        printf(" 366 Jours\n");
        printf(" 8784  Heures\n");
        printf(" 527040 Minutes\n");
        printf(" 31622400 Secondes ");
	  }
	  else
	  {
	  	printf("Annee non bissextile \n");
	  	printf("it has 12 Mois \n");
        printf("it has 365 Jours \n");
        printf("it has 8760 Heures  \n");
        printf("it has 525600 Minutes \n");
        printf("it has 3153600 Secondes \n");
	  }
	  
   return 0;	  
 }	
