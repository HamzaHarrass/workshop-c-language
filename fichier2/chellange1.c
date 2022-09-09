#include <stdio.h>

void main(){
	int a;
	
	printf("entre le nombre : ");
	scanf("%d",&a);
	
	a=a%2;
	
	if(a==0){
		printf("paire");
	}
	else {
	    printf("inpaire");
	}
	
	
}
