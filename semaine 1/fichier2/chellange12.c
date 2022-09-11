#include<stdio.h>


 int main(){
 	
 	int HH,MM,SS;
 	
 	int hh,mm,ss;
 	
 	printf("entre lheure et munite et seconde \n");
 	scanf("%d:%d:%d",&HH,&MM,&SS);
 	
 	printf("entre lheure et munite et seconde\n");
 	scanf("%d:%d:%d",&hh,&mm,&ss);
 	
 	if(HH >hh || MM>mm){
 		printf("le premier instant avant le deuxieme ");
	 }
 	else if (HH<hh || MM<mm){
 		printf("le deuxieme instant vient avant le premier");
	 }
 	
  return 0;
 }
