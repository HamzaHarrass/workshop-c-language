#include<stdio.h>
int main(){
	
	int a,b,s,i,n;
	a=0;
	b=1;
		printf("entre un nombre   :  ");
		scanf("%d",&n);
		
	for(i=0;i<=n;i++){
		s=a+b;
		a=b;
		b=s;
		
		printf("%d\n",s);
				
	}
	
	
}
	
	

