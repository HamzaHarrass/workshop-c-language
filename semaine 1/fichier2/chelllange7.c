#include<stdio.h>
#include<stdlib.h>

  int main  ()
  {
  	
  	char car;
  	
  	printf("entre le caracter : \n");
  	scanf("%c",&car);
  	printf("%d \n",car);
  	
  	if( car>=65 && car<=90){
  		printf("ce caracter est majuscel ");
	  }
	  else {
	  	printf("ce caracter est muniscul");
	  }
  	
  	
  }
