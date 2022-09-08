#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme ;
    float moyen ;
     int a,b,c,d;
     printf("donner le nombre a : ");
     scanf("%d",&a);
      printf("donner le nombre b : ");
     scanf("%d",&b);
     printf("donner le nombre c : ");
     scanf("%d",&c);
     printf("donner le nombre d : ");
     scanf("%d",&d);
    somme=a+b+c+d;
    moyen=(somme)/4;
     printf("la somme de quatre nombre est : %d \n",somme);

     printf("la moyen de quatre nombre est : %f",moyen);

    return 0;
}
