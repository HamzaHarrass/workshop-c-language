#include<stdio.h>

  int somme (int a ,int b ){
  	int S;
  	S=a+b;
  	printf("la somme de a et b est :%d",S);
  	return S;
  }
  
  int main (){
  	int a,b;
  	printf("entre a et b:");
  	scanf("%d   %d",&a,&b);
  somme(a,b);
  return 0;
  }
  
