#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,somme,soustraction,multiplication,division;
     int pourcentage;
    printf("donner a : ");
     scanf("%f",&a);
     printf("donner b :");
     scanf("%f",&b);

      somme=a+b;
     soustraction=a-b;
     multiplication=a*b;
      division=a/b;
     pourcentage=((int)a%(int)b);

    printf("la somme de a+b = %f \n ",somme);
    printf("la soustraction de a-b = %f \n ",soustraction);
    printf("la multiplication de a*b = %f \n",multiplication);
    printf("la division de a/b = %f \n",division);
    printf("la pourcentage de a %% b = %d \n",pourcentage);

    return 0;
}
