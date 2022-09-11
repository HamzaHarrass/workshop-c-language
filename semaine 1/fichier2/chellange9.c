#include<stdio.h>


 int main (){
 	
 	char crt;
 	
 	printf("entre un caracter :\n");
 	scanf("%c",&crt);
 	printf("le caracter en decimal est :%d\n",crt);
 	
 	
 	if (crt>=65 && crt<=90){
 		printf("ce caracter est majuscl\n");
	 }
	 else if (crt>=97 && crt<=122){
	 	printf("ce carcter est muniscl\n");
	 }
	  else{
	  	printf("pas alphabets\n");
	  }
 	
 	
 	
 }
