#include <stdio.h>


int  main() {


float longueur, largeur,rectangle;



printf("entre la longueur \n= ");
scanf("%f",&longueur);

printf("entre la largeur \n= ");
scanf("%f",&largeur);

rectangle=2*(longueur+largeur);

printf("le rectangle = %.2f ", rectangle);


return 0 ;
}
