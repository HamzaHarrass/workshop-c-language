#include<stdio.h>
#include<stdlib.h>

  int main  ()
  {
  	int a ;
  	printf("entre le nombre : \n");
  	scanf("%d",&a);
  	
  	if(a>0)
  	{
  		printf("ce nombre est positif \n");
  		
	  }
	  
	 else
	  {
	  	if(a<0)
	  	{
	  		printf("ce nombre est negatif \n");
		  }
		  else{
		  	printf("le nombre qui taper est 0");
		  }
	  }
  	
  	return 0;
  }
