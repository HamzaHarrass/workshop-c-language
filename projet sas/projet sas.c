#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 
 
struct Produit {
    int code ;
    char nom[20];
    float prix ;
	int quantite;	
};

      struct Produit P[3];
	  
      int  length_array=0;


    void Fadd(){
 //	printf("ajouter un produit ");
        int i,a;
		printf("how much produit do you want add  ") 	;
		scanf("%d",&a);
 	
 	    for(i=0;i<a;i++){
 	    	
 		   printf("\n entre le code de produit : \n");
 		   scanf("%d",&P[i].code);
 		
 		   printf("\n entre le nom de produit : \n");
 		   scanf("%s",&P[i].nom);
 		
 		   printf("\n entre le prix de produit : \n");
 		   scanf("%f",&P[i].prix);
 		
 		   printf("\n entre la quantite de produit : \n");
 		   scanf("%d",&P[i].quantite);
 		   
 		   length_array++;
	  }
	 }
 

    int Frecherche(){
 	    printf("recherche un produit ");
    }

    int Fsupprimer(){
 	    printf("suprimmer  un produit ");
    }
    	
    void Fafficher(){
    	int i,a;
    	printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
    	printf("_________________________________________________________________________________________________\n\n");
	    for(i=0;i<length_array;i++){
          printf("      %d    ||      %s         ||        %.2f dh         ||           %d       ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
     	}
 	//printf("afficher un produit ");
 
   // printf("      %d    ||      %s        ||         %.2f dh        ||            %d      ||\n",P2.code , P2.nom , P2.prix , P2.quantite);
   // printf("      %d    ||      %s         ||        %.2f dh         ||           %d       ||\n",P3.code , P3.nom , P3.prix , P3.quantite);
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
 	     	printf ("\n choisir un choix  :  ");
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
	        }  
	        
	        
		  
		  }while(n<=4||n>0);
 	    
 	     
 return 0;	
 }
