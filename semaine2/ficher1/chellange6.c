#include<stdio.h>


 main (){
 	
 	int  n[5], k[5],i,j;
 	
 	for( i=0;i<3;i++){
	 	printf("entrer un nombrre :\n");
	 	scanf("%d",&n[i]);
	 	
	 	for( j = 2 ; j < n[i] ; j++)
  		{
	  		if(n[i] % j == 0){
	  			k[i] = 1;
	  			break;
			}else{
				k[i] = 0;
			}
	  
 		}	
 	}
 	
	for( i=0;i<3;i++){
		
		 if(k[i] == 0 ){
	  	printf("%d %d : premier\n",n[i],k[i]);
	  }else printf("%d %d : non premier\n",n[i],k[i]);
 	} 	
 	
 	return 0;
 }
