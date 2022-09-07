#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10];
    char prenom[10];
    int age;
    char sexe[10];
    int numero;

    printf("donnez le nom :");
    scanf("%s",&nom);
       printf("donnez le prenom :");
    scanf("%s",&prenom);
       printf("donnez le age :");
    scanf("%s",&age);
       printf("donnez le sexe :");
    scanf("%s",&sexe);
       printf("donnez le numero :");
    scanf("%s ",&numero);


 printf("votre nom est :%s \n",nom);
 printf("votre prenom est : %s \n",prenom);
 printf("votre age est : %d \n",age);
 printf("votre sexe est : %s \n",sexe);
 printf("votre numero est : %d \n",numero );


      return 0;
}
