#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Metre ;
    float Mile ;
    float km ;
    printf("enter la distance en METRE : ");
    scanf("%f",&Metre);

   km= 1000*Metre;
   Mile=km*1.609;
    printf("Mile =%.2f", Mile);
    return 0;
}
