#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

    struct Produit {
         int code ;
         char nom[20];
         float prix ;
	     int quantite;	
    };
    
    struct Produit P[1000]={	
        {1,"aspro",15,3},
    	{2,"dolipran",20,20},
	};
	
     	int c,j,a,value,length_array=2,possition;
 	    char n[20]; 	    
        struct Produit P[1000];
        float somme =0,totalsomme=0;
		int totalqauntite=0;
        
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
    void Frecherche(){
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
			    }
		      }
		    default : printf("Votre choix n'est pas là ");
          }   
    }
    
   void Fmodifie(){
      printf("    code   ||         nom           ||            prix         ||        quantite     ||\n");
      printf("______________________________________________________________________________________\n\n");
      for (j=0;j<length_array;j++){
	        if(P[j].quantite<3){       
	        printf("   %d    ||          %s           ||         %.2f dh         ||           %d        ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
		 }
	    }
	    
	     printf("entre le code de produit  que vous modifie :\n");
	  scanf("%d",&c);
	   
   for(j=0;j<length_array;j++){
 	  if(c ==P[j].code ){
 	 	printf("%d",j);
      printf("entre la quantite que vous ajouter :\n");
	  scanf("%d",&a);
	  P[j].quantite+=a;   
     }
    }
   } 
    // Fsupprimer est un fonction pour supprimer un produit avec le code ou le nom 
    void Fsupprimer(){
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
		    		 }
		           }	    
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
   
   void Facheter(){	
   
          Fafficher();
          
          printf("ENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ ACHTER:\n");
            scanf("%d",&c);
            
             for(j=0;j<length_array;j++){
             if(c==P[j].code){
                printf("ENTRER La QUANTITE QUE VOUS VOULEZ ACHETER:\n");
                scanf("%d",&a);
            
            if(a> P[j].quantite){
                printf("la quantite que vous voulez demander\n est superieur du quantite de stocke!!!\n");
                }else {
                 somme = a*( P[j].quantite +( P[j].quantite*15)/100);
                 printf(" LA PRIX DE PRODUIT(S) ACHETER EST: %.2f\n\n\n",somme);
                  P[j].quantite-=a;
                 
                 totalqauntite+=a;
                 totalsomme+=somme;
           }
        }
      }
    }
    
    void statistiques(){
    	
    	printf("le prix des produits vendus aujourd'hui  : %.2f\n",totalsomme);
    	printf("la quantite des produits vendus aujourd'hui  : %d\n",totalqauntite);
	}	
	
	
 int main (){
 	
 	 	int n;
 	printf("-----------------------------------");
 	printf("\n  -> 1-add a product\n");
    printf("\n  -> 2-search for a product\n ");
    printf("\n  -> 3-modify a product\n");
 	printf("\n  -> 4-delete a product\n");
 	printf("\n  -> 5-display a product\n");
 	printf("\n  -> 6-buy a product\n");
 	printf("\n  -> 7-statistiques\n");
 	printf("-----------------------------------");
 	     do{
 	     	printf ("\n choisir un choix principale  :  ");
 	     scanf("%d",&n);
 	     	
 	     	 switch(n){
 	     	
 	     	case 1 : Fadd();
 	     	break;
 	     	
 	     	case 2 : Frecherche();
 	     	break ;
 	     	
 	     	case 3 : Fmodifie();
 	     	break;
 	     	
 	     	case 4 : Fsupprimer();
 	     	break ;

			case 5 : Fafficher();
 	     	break ;
  
            case 6 : Facheter();
 	     	break ;
 	     	
 	     	case 7 : statistiques();
 	     	break ;
 	     	
			default :  printf("Votre choix n'est pas là ");
	        }  
	        
		  }while(n<=7 || n>0);
 return 0;	
 }
