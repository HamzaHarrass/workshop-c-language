   #include<stdio.h>
   #include<string.h>
   
    struct Produit {
         int code ;
         char nom[20];
         float prix ;
	     int quantite;	
    };
     
    
    struct Transaction{
    	int Id ;
    	char Nom[50];
    	float Prix ;
    	int Qauntite;
	}; 
	struct Transaction T[100];
    
    struct Produit P[1000]={	
        {1,"aspro",15,3},
    	{2,"dolipran",20,20},
    	{3,"bb",30,20},
    	{4,"aac",40,20},
	};
	
//	   float max = P[0].prix,min=P[0].prix;
     	int i,c,j,a,value,length_array=4,possition,totalqauntite=0,count=0;
 	    char n[20]; 	   
        struct Produit P[1000];
        float somme =0,totalsomme=0;
        
        
    void Fadd(){

     		printf("\n\thow much product do you want add : ") 	;
	    	scanf("%d",&a);
 	
 	    for(i=0;i<a;i++){
 	    	
 		   printf("\n\t entre le code de produit : ");
 		   scanf("%d",&P[length_array].code);
 		
 		   printf("\n\t entre le nom de produit : ");
 		   scanf("%s",&P[length_array].nom);
 		
 		   printf("\n\t entre le prix de produit : ");
 		   scanf("%f",&P[length_array].prix);
 		   P[length_array].prix *= 1.15;
 		
 		   printf("\n\t entre la quantite de produit : ");
 		   scanf("%d",&P[length_array].quantite);
 		   
 		   length_array++;
 		   system("cls");
	  }
	  
	 }
 
 // fonction Frecherche pour rechercher des produit avec le code et le nom 
 
    void Frecherche(){
    	printf("\n\t-----------------------------------------\n");
    	printf("\t -> 1 : chercher avec le code de produit :\n");
    	printf("\t -> 2 : chercher avec le nom de produit  :\n");
    	printf("\t-----------------------------------------\n");
      	
      	
    		printf ("\n\t choisir un choix  :  ");
 	     scanf("%d",&a);
 	     
    			switch (a){
    		
    		case 1 : 
                 	 printf("\n\tDonner le code de produit que vous rechercher : ");
 	                 scanf ("%d",&c);
		              for(j=0;j<length_array;j++){
 	    	          if(P[j].code == c){
 	    	       	printf("\n\t\tcode\t|\tnom\t\t|\tprix\t\t|\tquantite\t\n");
                	printf("\t______________________________________________________________________________________\n\n");
            	    printf("\t\t%d\t|\t%-10s\t|\t%-7.2fdh\t|\t%-7d\n\n\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
            	    return;			 }
		            }
		            printf("\n\t\t-------------------------\n");
		            printf("\t\tce produit n'existe pas\n");
		            printf("\t\t-------------------------\n\n\n");
            break ;
			case 2 :   printf("Donner le nom de produit que vous rechercher ;");
 	                   scanf ("%s",&n);
 	                   
	            	for(j=0;j<length_array;j++){
			 		value= strcmp (n,P[j].nom );
 	                	if(value==0){
 	    	      	printf("\n\t\tcode\t|\tnom\t\t|\tprix\t\t|\tquantite\t\n");
                	printf("\t______________________________________________________________________________________\n\n");
            	    printf("\t\t%d\t|\t%-10s\t|\t%-7.2fdh\t|\t%-7d\n\n\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
                	return;
			    }
		      }
		          printf("\n\t\t-------------------------\n");
		            printf("\t\tce produit n'existe pas\n");
		            printf("\t\t-------------------------\n\n\n");
		      break;
		    default : printf("Votre choix n'est pas valide");
          }   
    }
    
   void Fmodifie(){
                   printf("\n\t\tcode\t|\tnom\t\t|\tprix\t\t|\tquantite\t\n");
               	   printf("\t______________________________________________________________________________________\n\n");
      for (j=0;j<length_array;j++){
	        if(P[j].quantite<3){       
	            printf("\t\t%d\t|\t%-10s\t|\t%-7.2fdh\t|\t%-7d\n\n\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
		 }
	    }
	    
	     printf("entre le code de produit  que vous modifie :\n");
	  scanf("%d",&c);
	   
   for(j=0;j<length_array;j++){
 	  if(c ==P[j].code ){
//	printf("%d",j);
      printf("entre la quantite que vous ajouter :\n");
	  scanf("%d",&a);
	  P[j].quantite+=a; 
	  return;  
     }
    }
              printf("\n\t\t-------------------------\n");
	          printf("\t\tce produit n'existe pas\n");
		      printf("\t\t-------------------------\n\n\n");
   } 
    
	// Fsupprimer est un fonction pour supprimer un produit avec le code ou le nom 
    
    void Fsupprimer(){
 	    printf("supprimer un produit \n");
                 	 printf("donner le code de produit que vous supprimer ;");
 	                 scanf ("%d",&c);  
					     
		              for(j=0;j<length_array;j++){
 	    	          if(c ==P[j].code ){
// 	    	          	printf("%d",j);
 	                    possition = j;
                       for (j=possition;j<length_array;j++){
              		     P[j]=P[j+1];
			          }	
					   length_array--;
					   return;
		    		 }
		           }	
				    printf("\n\t\t-------------------------\n");
		            printf("\t\tce produit n'existe pas\n");
		            printf("\t\t-------------------------\n\n\n") ;   
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
            
            if(a> P[j].quantite || a <= 0){
                printf("\n la quantite que vous voulez demander n'est pas valide....!!!\n");
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
                 
                 return;
                // max=P[0].prix;
//                 	if( max < P[j].prix ) max = P[j].prix;
//  		         
//                 	if( min > P[j].prix ) min = P[j].prix;
				    	
           }
        }
      }
      printf("ce produit n'existe pas'");
   
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
	printf("la moyenne des produits vendus aujourd'hui  : %f\n",totalsomme / totalqauntite);
	printf("le max des prix des produits vendus aujourd'hui  : %f\n",max);
	printf("le min des prix des produits vendus aujourd'hui  : %f\n",min);
	}	
	
	
 int main (){
 	
 	 	int n;
 	
 	
 	     do{
 	     	printf("\n\t\t --------------------------------");
		 	printf("\n\t\t|  -> 1-add a product            |");
		    printf("\n\t\t|  -> 2-search for a product     |");
		    printf("\n\t\t|  -> 3-modify a product         |");
		 	printf("\n\t\t|  -> 4-delete a product         |");
		 	printf("\n\t\t|  -> 5-display a product        |");
		 	printf("\n\t\t|  -> 6-buy a product            |");
		 	printf("\n\t\t|  -> 7-statistiques             |");
		 	printf("\n\t\t|  -> 8-transaction              |");
		 	printf("\n\t\t --------------------------------");
 	     	printf ("\n\n\t choisir un choix principale  :  ");
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
