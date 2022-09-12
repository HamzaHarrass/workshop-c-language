#include<stdio.h>
#include<stdlib.h>

  int main(){
  	
  	int i,a,x;
  	
  	printf("entre un nombre ");
  	scanf("%d",&a);
  	
  	for(i=0;i<=10;i++)
  	{
  		x=a*i;
  		printf("%d * %d = %d\n",a,i,x);
	  }
  	return 0 ;
  }
