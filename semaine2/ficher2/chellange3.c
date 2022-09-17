#include<stdio.h>
#include<stdbool.h>
  bool ispremier(a){
  	
  	int i;
  	
  	
  	for( i = 2;i < a;i++){
  		if(a%i==0)
		  {
  		return false;	
	   } 
      
	  return true;
}

}
  int main (){
  		int a;
   	printf("entre le nombre a ");
   	scanf("%d",&a);
   	   	 if(ispremier(a)){
   	    	printf("yes");
		}else printf("no");
   	return 0;
  }
