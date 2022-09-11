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
	  }
	  switch(mois){
	  case 2:strcpy(Mois,"fevr");
	  break;
	  }
	  switch(mois){
	  case 3:strcpy(Mois,"mars");
	  break;
	  }
	  switch(mois){
	  case 4:strcpy(Mois,"avr");
	  break;
	  }
	  switch(mois){
	  case 5:strcpy(Mois,"mai");
	  break;
	  }
	  switch(mois){
	  case 6:strcpy(Mois,"juin");
	  break;
	  }
	  switch(mois){
	  case 7:strcpy(Mois,"juil");
	  break;
	  }
	  switch(mois){
	  case 8:strcpy(Mois,"aout");
	  break;
	  }
	  switch(mois){
	  case 9:strcpy(Mois,"sept");
	  break;
	  }
	  switch(mois){
	  case 10:strcpy(Mois,"oct");
	  break;
	  }
	  switch(mois){
	  case 11:strcpy(Mois,"nov");
	  break;
	  }
	  switch(mois){
	  case 12:strcpy(Mois,"dec");
	  break;
	  }
	  printf("%d/%s/%d",jour,Mois,annee);
  	
  }
