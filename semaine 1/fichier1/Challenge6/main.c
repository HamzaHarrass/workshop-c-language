#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float C;
    printf(" entre la temperature en fahrenh : ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("C=%.2f \n",C);

    return 0;
}
