#include<stdio.h>

  int main(){
  	
  	int i ,m , k = 0;
  	
  	printf("entre un nombre :");
  	scanf("%d",&m);
  	
  	for(i = 2 ; i < m ; i++)
  	{
  		if(m % i == 0){
  			k = 1;
  			break;
		  }
		  else {
		  	k = 0 ;
		  }
	  }
	  
	  if(k == 0 ){
	  	printf("premier");
	  }else printf("non premier");
	  
	  return 0;
  	
  }
