#include<stdio.h>


 int main(){
 	
 	int i, n, num_etoile=1, num_esp,j;
 	scanf("%d", &n);
 	
 	num_esp = n -1;
 	for(i=0;i<n;i++)
 	{
 		for( j = 0;j<num_esp; j++)printf(" ");
 		for( j = 0;j<num_etoile;j++)printf("*"); 		
 		printf("\n");
 		num_etoile+=2;
		num_esp--;	
	 }
 }
