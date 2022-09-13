#include<stdio.h>
#include<conio.h>
#include<math.h>



int main()
    {
        int x,y , i=1 ,p=1;
        printf("donner Le nombre de la base x : ");
        scanf ("%d",&x);
        printf("donner Le nombre de l'exposant y : ");
        scanf ("%d",&y);

        if(x==0)
            printf("Le resultat est 0");
        else if (x==0)
            printf("Le resultat est 1");
        else {
            while(i<=y)
            {
                p *= x;
                i++;
            }
            printf("Le resultat est %d",p);

        }

            getch();
            return 0;
    }
