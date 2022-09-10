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

    if(C<=0){
        printf("tres foid \n");
    }
    else if(C>=30){
        printf("tres chaud \n");
    }
    else if(C<=20){
        printf("froid \n");
    }
    else if(C>=20){
        printf("chaud \n");
    }


    return 0;
}
