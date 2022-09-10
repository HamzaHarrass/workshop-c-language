# include<stdio.h>
# include<stdlib.h>

int main()
{
	
	int a,b,somme,triple ;

    printf("entre le nombre a :\n");
	scanf("%d",&a);
	
	printf("entre le nombre b :\n");
	scanf("%d",&b);
	
	
	somme=a+b;
	
	

	
	if (a==b)
	{
     triple = somme*3;
     printf("triple de somme est : %d",triple );
	}
	else
	{
			printf("la somme est : %d",somme);
	}

     
	
	
  return 0 ;		
}
