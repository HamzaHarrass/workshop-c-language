   #include<stdio.h>
   #include<string.h>
   
    struct Produit {
         int code ;
         char nom[20];
         float prix ;
	     int quantite;	
    };
     
    
    struct stats{
    	int Id ;
    	char Nom[50];
    	float Prix ;
    	int Qauntite;
	}; 
	struct stats T[100];
    
    struct Produit P[1000]={	
        {1,"aspro",15,3},
    	{2,"dolipran",20,20},
    	{3,"bb",30,20},
    	{4,"cc",40,20},
	};
	
//	   float max = P[0].prix,min=P[0].prix;
     	int i,c,j,a,value,length_array=4,possition,totalqauntite=0,count=0;
 	    char n[20]; 	   
        struct Produit P[1000];
        float somme =0,totalsomme=0;
        
        
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
 		   P[length_array].prix *= 1.15;
 		
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
 	    	       	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                	printf("______________________________________________________________________________________\n\n");
            	    printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
            	    break ;			 }
		            }
            break ;
			case 2 :   printf("donner le nom de produit que vous rechercher ;");
 	                   scanf ("%s",&n);
 	                   
	            	for(j=0;j<length_array;j++){
			 		value= strcmp (n,P[j].nom );
 	                	if(value==0){
 	    	        	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                    	printf("______________________________________________________________________________________\n\n");
                	    printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
                	break ;
			    }
		      }
		    default : printf("Votre choix n'est pas là ");
          }   
    }
    
   void Fmodifie(){
       	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
    	printf("______________________________________________________________________________________\n\n");
      for (j=0;j<length_array;j++){
	        if(P[j].quantite<3){       
	            printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
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
			          }	
					   length_array--;
		    		 }
		           }	    
          }
    //fafficher est un fonction pour afficher tous les produit 	
    void Fafficher(){
    	int i,j, a;
    	float prix;
    	char nom[50];
    	
    	printf("-----------------------------------------\n");	
        printf(" -> 1 : affichie list ordre decroissant du prix           :\n");
    	printf(" -> 2 : affichie list ordre alphabetique croissant du nom :\n");
    	printf("-----------------------------------------");
    	
    		printf ("\n choisir un choix  :  ");
 	     scanf("%d",&a);
    	
    	switch(a){
    		
    		
    		case 1 :	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                     	printf("______________________________________________________________________________________\n\n");
                           for(i=0;i<length_array;i++){
                             for(j=i+1;j<length_array;j++){
                                if(P[i].prix<P[j].prix){
                                   prix = P[j].prix;
                                   P[j].prix= P[i].prix;
                                   P[i].prix = prix;   
                            }
                        }	
          printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
          }
        break ;
    	   case 2 :
		   
         		   printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                   	printf("______________________________________________________________________________________\n\n");
                           for(i=0;i<length_array;i++){
                             for(j=i+1;j<length_array;j++){
                                if(strcmp(P[i].nom,P[j].nom) >0 ){
                                   strcpy (nom , P[j].nom);
                                   strcpy(P[j].nom , P[i].nom);
                                   strcpy(P[i].nom , nom) ;   
                            }
                        }	
    		 printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
	    	}  
		break ; 
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
                printf("\n%d",j);
            
            if(a> P[j].quantite){
                printf("\n la quantite que vous voulez demander\n est superieur du quantite de stocke!!!\n");
                }else {
                	
                	P[j].quantite-=a;
                	
                	T[count].Id=P[j].code;
                	strcpy(T[count].Nom,P[j].nom);
                	T[count].Prix= P[j].prix;
                	T[count].Qauntite= a;                	
                	count++;
                 somme = a*P[j].prix;
                 printf(" LE PRIX DE PRODUIT(S) ACHETER EN TTC EST : %.2f DH\n\n\n",somme);
                  
                 
                 totalqauntite+=a;
                 totalsomme+=somme;
                 
                // max=P[0].prix;
//                 	if( max < P[j].prix ) max = P[j].prix;
//  		         
//                 	if( min > P[j].prix ) min = P[j].prix;
				    	
           }
        }
      }
   
    }
    
 void transaction(){
     	printf(" code     ||   nom    ||  prix   ||  quantite  ||\n");
   	printf("__________________________________________________\n\n");
	for(i=0;i<count;i++){
		printf("%-10d||%-10s||%-10.2f||%-10d||\n",T[i].Id,T[i].Nom,T[i].Prix,T[i].Qauntite);
	}
}
      
void statistiques(){
	float min, max;
	int i;
				min = T[0].Prix;
				for(i=0;i<count;i++){
					if (T[i+1].Prix<min) min = T[i].Prix;
				}
				max = T[0].Prix;
				for(i=0;i<count;i++){
					if (T[i+1].Prix>max) max = T[i].Prix;
				}
	printf("le prix des produits vendus aujourd'hui  : %.2f\n",totalsomme);
	printf("la quantite des produits vendus aujourd'hui  : %d\n",totalqauntite);
	printf("le max des prix des produits vendus aujourd'hui  : %f\n",max);
	printf("le min des prix des produits vendus aujourd'hui  : %f\n",min);
	}	
	
	
 int main (){
 	
 	 	int n;
 	
 	
 	     do{
 	     	printf("-----------------------------------");
 	printf("\n  -> 1-add a product\n           ");
    printf("\n  -> 2-search for a product\n    ");
    printf("\n  -> 3-modify a product\n        ");
 	printf("\n  -> 4-delete a product\n        ");
 	printf("\n  -> 5-display a product\n       ");
 	printf("\n  -> 6-buy a product\n           ");
 	printf("\n  -> 7-statistiques\n            ");
 	printf("\n  -> 8-transaction \n            ");
 	printf("\n-----------------------------------");
 	     	printf ("\n choisir un choix principale  :  ");
 	     scanf("%d",&n);
 	     system("cls");
 	     	
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
 	     	
 	     	case 8 : transaction();
 	     	break;
 	     	
			default :  printf("Votre choix n'est pas là ");
	        }  
	        
		  }while(n<=7 || n>0);
 return 0;	
 }
