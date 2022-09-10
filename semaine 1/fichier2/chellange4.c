#include<stdio.h>
#include <math.h>

int main()
{
	int a, b, c, DLTA;
	
	float x1, x2;
	
	printf("entre les nombre a :\n");
	scanf("%f",&a);
	
	printf("entre les nombre b :\n");
	scanf(" %f",&b);
	
	printf("entre les nombre c :\n");
	scanf("%f",&c);
	
	
	DLTA = pow(b,2)-4*a*c;
	
	if(DLTA>0)
	{	
		x1=(-b+sqrt(DLTA))/2*a;
		x2=(-b-sqrt(DLTA))/2*a;
		
		printf(" x1 = %f \n",x1);
		printf("x2 = %f \n",x2);
	}
	else if(DLTA==0)
	{
		x1=(-b)/2*a;
		printf("x1 = %f \n",x1);
	}
	else if (DLTA<0)
	{
		printf("Il n'y a pas de solutions sur IR");
	}
	
	return 0;
}
