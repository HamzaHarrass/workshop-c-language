# include<stdio.h>
# include<stdlib.h>
# include<math.h>
int main ()

{
	float x1,x2,y1,y2,a,b,c;
	
	printf("entre le nombre x1 : ");
	scanf("%f",&x1);
	
	printf("entre le nombre x2 : ");
	scanf("%f",&x2);
		
	printf("entre le nombre y1 : ");
	scanf("%f",&y1);	
	
	printf("entre le nombre y2 : ");
    scanf("%f",&y2);
    
	a=pow((x1-x2),2);
	b=pow((y2-y1),2);   
	c= sqrt(a+b);
	
	printf("la distance entre deux points est : %f",c) ;
					        
}
