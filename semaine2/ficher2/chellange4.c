#include<stdio.h>
#include<stdbool.h>

  bool divededby( n , a){
  	
  	
  	int i;
  	
  	
  	for( i = 2;i < a;i++){
  		if(a%i==0)
		  {
  		return false;	
	   } 
      
	  return true;
 }
  	
  	for( i = 2;i < n;i++){
  		if(n%i==0)
		  {
  		return false;	
	   } 
      
	  return true;
  	
  	return ;
  }
}
  
   int main (){
   	
   	int a,n,i;

   	printf("entre le nombre a ");
   	scanf("%d",&a);
   		printf("entre le nombre n ");
   	scanf("%d",&n);
   	
   	   	 if(divededby(a)){
   	    	printf("le nombre a=%d et premier \n",a);
		}else printf("le nombre a=%d et no premier\n",a);
		
		if(divededby(n)){
			printf("le nombre n=%d et premier \n",n);
         	}else printf ("le nombre n=%d et no premier \n",n);
   	return 0;
   }
