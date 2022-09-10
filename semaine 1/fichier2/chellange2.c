# include<stdio.h>
# include<stdlib.h>

int main()
{
	
	char a;
	
	printf("entre un caractere : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a': printf("la voyelle est: %c",a);
		    break;
		    
		case 'e': printf("la voyelle est :%c",a);
		    break;
		    
		case 'i': printf("la voyelle est :%c",a);
		    break;
		    
		case 'o': printf("la voyelle est :%c",a);
		    break;
		    
		case 'u': printf("la voyelle est :%c",a);
		    break;
		    
		case 'y': printf("la voyelle est :%c",a);
		    break;
		    
		default : printf("n'est pas un voyelle");
		    break;
	}
	
  return 0;
}
