#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Produit {
    int code ;
    char nom[20];
    float prix ;
	int quantite;	
};

      struct Produit P1;
	  struct Produit P2;
	  struct Produit P3;



 int Fadd(){
 	printf("ajouter un produit ");
 }

int Frecherche(){
 	printf("recherche un produit ");
 }

int Fsupprimer(){
 	printf("suprimmer  un produit ");
 }

void Fafficher(){
 	//printf("afficher un produit ");
 	printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
 	printf("_________________________________________________________________________________________________\n\n");
    printf("      %d    ||      %s         ||        %.2f dh         ||           %d       ||\n",P1.code , P1.nom , P1.prix , P1.quantite);
    printf("      %d    ||      %s        ||         %.2f dh        ||            %d      ||\n",P2.code , P2.nom , P2.prix , P2.quantite);
    printf("      %d    ||      %s         ||        %.2f dh         ||           %d       ||\n",P3.code , P3.nom , P3.prix , P3.quantite);
 }


 int main (){
 	
 	
 	
 	
 	int n;
  
	   
	  P1.code = 1 ;
	  strcpy(P1.nom , "additiva");
      P1.prix = 79 ;
      P1.quantite = 150 ;
 
      P2.code = 2 ;
      strcpy(P2.nom , "azimycine");
      P2.prix = 66 ;
      P2.quantite = 150 ;
  
  	  P3.code = 3 ;
  	  strcpy(P3.nom , "dolipran");
      P3.prix = 18 ;
      P3.quantite = 150 ;
 
 
 
 	printf("-----------------------------------");
 	printf("\n 1-add a product\n");
    printf("\n 2-search for a product\n ");
 	printf("\n 3-delete a product\n");
 	printf("\n 4-display a product\n");
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
		  
		  }while(n<=4,n>0);
 	    
 	     
 return 0;	
 }
