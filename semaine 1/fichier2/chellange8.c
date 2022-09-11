#include<stdio.h>

  int main()
  {
  	float arb,fra,mat,svt,pc,somme,moyen;
  
  printf("entre la note de arabe :");
  scanf("%f",&arb);

  printf("entre la note de france :");
  scanf("%f",&fra);

  printf("entre la note de math :");
  scanf("%f",&mat);
 
  printf("entre la note de svt :");
  scanf("%f",&svt);
 
  printf("entre la note de phisique :");
  scanf("%f",&pc);
 
   
   somme=arb+fra+mat+svt+pc;
   
   moyen=(somme)/5;
   
   printf("la moyen est\n :");
   printf("%.2f",moyen);
   
   if (moyen<10){
   	printf("recale\n");
   }
  
   	
   	else if (moyen>=10 && moyen<12) {
  	printf("passable\n");
	  }	
	  
    else if (moyen>=12 && moyen<14)
	 {
	 	printf("assez bien\n");
	 }
	 else if(moyen>=14 && moyen<16) {
	  printf("bien\n");
	 }
	else if (moyen>=16 && moyen<12){
		printf("tres bien\n");
	}

   
  }
