#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    /*********************************sprint 1********************************/
    int nbquestions=0;
    int nombre1=0,nombre2=0;
    int operateur=0;
    srand(time(NULL));
    printf("A Combien de questions voulez-vous répondre?\n");
    scanf("%d",&nbquestions);
    for(int i=0;i<nbquestions;i++)
    {
        /************************géneration des nombres aléatoires*******************/
        nombre1=(rand()%100)+1;
        nombre2=(rand()%100)+1;
        operateur=(rand()%3);

        /*************************génerations des questions******************************/œ
        if(operateur==0)
        {
            printf("%d+%d\n",nombre1,nombre2);
        } else
            if(operateur==1)
            {
                printf("%d-%d\n",nombre1,nombre2);
            }
            else
            {
                printf("%d*%d\n",nombre1,nombre2);
            }
    }

    return 0;
}
