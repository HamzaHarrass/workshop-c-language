#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float C;
    printf(" entre degre celsius : ");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("F=%.2f",F);

    return 0;
}
