#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mile;
    float metre;

    printf("donner la destance en mile : ");
    scanf("%f",&mile);

    metre=mile/1609;
    printf("%f",metre);

    return 0;
}
