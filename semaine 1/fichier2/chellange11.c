#include<stdio.h>
#include<stdlib.h>
#include<time.h>


  int main(){
  	
  	int i ;
  	
  	srand(time(NULL));
  	i=rand()%12;
  	
  		switch(i){
	  case 1:printf("janv");
	  break;
	  
	  
	  case 2:printf("fevr");
	  break;
	  
	  
	  case 3:printf("mars");
	  break;
	
	  
	  case 4:printf("avr");
	  break;
	  
	  
	  case 5:printf("mai");
	  break;
	  
	  
	  case 6:printf("juin");
	  break;
	  
	  
	  case 7:printf("juil");
	  break;
	  
	  
	  case 8:printf("aout");
	  break;
	  
	  
	  case 9:printf("sept");
	  break;
	  
	  
	  case 10:printf("oct");
	  break;
	  

	  case 11:printf("nov");
	  break;


	  case 12:printf("dec");
	  break;
	  
	  printf("%i",i);
	  }
  	
  	return 0;
  }
