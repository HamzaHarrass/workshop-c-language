#include<stdio.h>
#include<string.h>

  int main(){
  	
  	int jour,mois,annee;
  	char Mois[20];
  	printf("donner la date de aujord'hui ");
  	scanf("%d/%d/%d",&jour,&mois,&annee);
  	
  	switch(mois){
	  case 1:strcpy(Mois,"janv");
	  break;
	  
	  
	  case 2:strcpy(Mois,"fevr");
	  break;
	  
	  
	  case 3:strcpy(Mois,"mars");
	  break;
	
	  
	  case 4:strcpy(Mois,"avr");
	  break;
	  
	  
	  case 5:strcpy(Mois,"mai");
	  break;
	  
	  
	  case 6:strcpy(Mois,"juin");
	  break;
	  
	  
	  case 7:strcpy(Mois,"juil");
	  break;
	  
	  
	  case 8:strcpy(Mois,"aout");
	  break;
	  
	  
	  case 9:strcpy(Mois,"sept");
	  break;
	  
	  
	  case 10:strcpy(Mois,"oct");
	  break;
	  

	  case 11:strcpy(Mois,"nov");
	  break;


	  case 12:strcpy(Mois,"dec");
	  break;
	  
	  
	  default : printf("le mois n'existe pas'");
	 
	  printf("%d/%s/%d",jour,Mois,annee);
	  
	  }
	  
	 
	  	 
  	return 0;
  }
