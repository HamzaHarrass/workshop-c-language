#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  
 
    struct Produit {
         int code ;
         char nom[20];
         float prix ;
	     int quantite;	
    };
    
    struct Produit P[1000]={
    	
    	{1,"aspro",15,15},
    	{2,"dolipran",20,20},
		{99,"aspro",15,15}
	};

	int c,j,a,value,length_array=3,possition;
 	    char n[20]; 	    
        struct Produit P[1000];



    void Fadd(){

        int i,a;
        int b;
		printf("how much produit do you want add  ") 	;
		scanf("%d",&a);
 	
 	    for(i=0;i<a;i++){
 	    	
 		   printf("\n entre le code de produit : \n");
 		   scanf("%d",&P[length_array].code);
 		
 		   printf("\n entre le nom de produit : \n");
 		   scanf("%s",&P[length_array].nom);
 		
 		   printf("\n entre le prix de produit : \n");
 		   scanf("%f",&P[length_array].prix);
 		
 		   printf("\n entre la quantite de produit : \n");
 		   scanf("%d",&P[length_array].quantite);
 		   
 		   length_array++;
	  }
	 }
 
 
 
 
 // fonction Frecherche pour rechercher des produit avec le code et le nom 
 
 

    int Frecherche(){
    	printf("-----------------------------------------\n");
    	printf(" -> 1 : chercher avec le code de produit :\n");
    	printf(" -> 2 : chercher avec le nom de produit  :\n");
    	printf("-----------------------------------------");
      	
      	
    		printf ("\n choisir un choix  :  ");
 	     scanf("%d",&a);
 	     
    			switch (a){
    		
    		case 1 : printf("recherche un produit ");
                 	 printf("donner le code de produit que vous rechercher ;");
 	                 scanf ("%d",&c);
 	                 
		              for(j=0;j<length_array;j++){
 	    	          if(P[j].code == c){
 	    	        printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
                	printf("______________________________________________________________________________________\n\n");
            	    printf("   %d    ||          %s           ||         %.2f dh         ||           %d        ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
            	    break ;			 }
		            }
            break ;
		
			
			
			case 2 :   printf("donner le nom de produit que vous rechercher ;");
 	                   scanf ("%s",&n);
 	                   
	            	for(j=0;j<length_array;j++){
			 		value= strcmp (n,P[j].nom );
 	                	if(value==0){
 	    	        	printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
                	    printf("______________________________________________________________________________________\n\n");
                	    printf("   %d    ||          %s           ||         %.2f dh         ||           %d        ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
                	break ;
			    }else printf ("Ce produit n'est pas disponible");	
		      }
		    
		    default : printf("Votre choix n'est pas là ");
          }   
}

    // Fsupprimer est un fonction pour supprimer un produit avec le code ou le nom 


    int Fsupprimer(){
 	    printf("supprimer un produit \n");
                 	 printf("donner le code de produit que vous supprimer ;");
 	                 scanf ("%d",&c);  
					     
		              for(j=0;j<length_array;j++){
 	    	          if(c ==P[j].code ){
 	    	          	printf("%d",j);
 	                    possition = j;
                       for (j=possition;j<length_array;j++){
              		     P[j]=P[j+1];
              		     length_array--;
              	        break;	
			          }
			            
 	    	        break ;	
		    		 }
		            }

             
			  
//			  for(j=0;j<length_array;j++){
//              
//			  }
//			  length_array--;
 	    
    }
    	
    	
    	
    	
    //fafficher est un fonction pour afficher tous les produit 	
    	
    	
    	
    void Fafficher(){
    	int i,a;
    	printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
    	printf("______________________________________________________________________________________\n\n");
	    for(i=0;i<length_array;i++){
          printf("   %d    ||          %s           ||         %.2f dh         ||           %d        ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
     	}
 
   }


 int main (){
 	
 	
 	 	int n;
 	

  
	
 	printf("-----------------------------------");
 	printf("\n  -> 1-add a product\n");
    printf("\n  -> 2-search for a product\n ");
 	printf("\n  -> 3-delete a product\n");
 	printf("\n  -> 4-display a product\n");
 	printf("-----------------------------------");
 	
 	
 	     do{
 	     	printf ("\n choisir un choix principale  :  ");
 	     scanf("%d",&n);
 	     	
 	     	 switch(n){
 	     	
 	     	case 1 : Fadd();
 	     	break;
 	     	
 	     	case 2 : Frecherche();
 	     	break ;
 	     	
 	     	case 3 : Fsupprimer();
 	     	break;
 	     	
 	     	case 4 : Fafficher();
 	     	break ;
			  
			default :  printf("Votre choix n'est pas là ");
	        }  
	        
		  }while(n<=4||n>0);
 	    
 	     
 return 0;	
 }
