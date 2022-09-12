#include<stdio.h>

  int main(){
  	
  	int N , invrs;
  	
  	printf("entre un nombre ");
  	scanf("%d",&N);
  	invrs=0;
  	do{
  		invrs = (invrs*10) + N%10;
  		
  		
  		N=N/10;
  		
  		
	  }while(N!=0);
	  
	printf("hhhhhhh %d", invrs);
  	
  }
