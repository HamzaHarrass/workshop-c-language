#include<stdio.h>

 int echange(int a,int b){
 	
 	int c;
 	
 	c=a;
 	a=b;
 	b=c;
 	
 	printf("afficher l'echange de a et  b  a=%d b=%d",a,b);
 	
 	return c;
 }
 
 int main (){
 	
 	int a,b;
 	
 	printf("entre les deux nombre a et b :");
 	scanf ("%d  %d",&a,&b);
 	echange(a,b);
 	
 	return ;
 }
