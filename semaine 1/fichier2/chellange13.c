#include<stdio.h>

 int main(){
 	int n1,n2,x1,x2,x3,y1,y2,y3;
 	
 	printf("entre les deux extremites de P : ");
 	scanf("%d;%d",&x1,&y1);
 	
 	printf("entre les deux extremites de L0 : ");
 	scanf("%d;%d",&x2,&y2);
 	
 	printf("entre les deux extremites de L1 : ");
 	scanf("%d;%d",&x3,&y3);
 	
 	
 	n1=(((x3-x2)*(x1-x2))/((x3-x2)*(x3-x2)))*(x3-x2);
 	
 	n2=(((y3-y2)*(y1-y2))/((y3-y2)*(y3-y2)))*(y3-y2);
 	
 	
 	
 	printf("%d\n",n1);
 	printf("%d\n",n2);
 	
 	
 	if (n1==0 && n2 == 0){
 		printf("le poin sur le segment");
	 }
	 else {
	 	printf("e point n'est pas dans segment");
	 }
 }
