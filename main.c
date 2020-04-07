#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,nba;
    int op;
    int a;

    printf("entrer un nombre :");
    scanf("%d",&nb);
    printf("entrer un second nombre :");
    scanf("%d",&nba);
    printf("entrer un operateur :\n1 = +\n2 = -\n3 = *\n4 = /\nle choix:");
    scanf("%d",&op);


    switch (op)
    {
    case 1:
    printf("%d + %d = %d",nb,nba,nb+nba);
    break;
    case 2:
        printf("%d - %d = %d",nb,nba,nb-nba);
    break;
    case 3:
        printf("%d * %d = %d",nb,nba,nb*nba);
    break;
    case 4:
        printf("%d / %d = %d\n",nb,nba,nb/nba);
    break;
    }
    system("pause");

    return 0;
}
