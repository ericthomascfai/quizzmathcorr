#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    /*********************************sprint 1********************************/
    int nbquestions=0;
    int nombre1=0,nombre2=0;
    int operateur=0;
    int resultat=0;
    int rep=0;
    int choix=0;
    int breponse=0;
    int mreponse=0;
    int place=0;
    srand(time(NULL));
    printf("A Combien de questions voulez-vous répondre?\n");
    scanf("%d",&nbquestions);
    for(int i=0;i<nbquestions;i++)
    {
        /************************géneration des nombres aléatoires*******************/
        nombre1=(rand()%100)+1;
        nombre2=(rand()%100)+1;
        operateur=(rand()%3);

        /*************************génerations des questions******************************/
        if(operateur==0)
        {
            printf("%d+%d\n",nombre1,nombre2);
            resultat=nombre1+nombre2;
        } else
            if(operateur==1)
            {
                printf("%d-%d\n",nombre1,nombre2);
                resultat=nombre1-nombre2;
            }
            else
            {
                printf("%d*%d\n",nombre1,nombre2);
                resultat=nombre1*nombre2;
            }
            /**********************Génération des réponses possibles****************/
            place=rand()%3;
            for(int i=0;i<3;i++)
            {
                if(i==place)
                {
                    rep=resultat;
                }
                else {
                    if (operateur == 2)
                        rep = (rand() % 10000 + 1);
                    else
                        rep = (rand() % 100) + 1;

                }
                printf("%d\n", rep);
            }
            scanf("%d",&choix);
            if(resultat==choix)
            {
                printf("Bien joué!!!!!!!!!!!\n");
                breponse++;
            }
            else
            {
                printf("Raté le résultat était %d",resultat);
                mreponse++;
            }

    }
    /*****************************statistiques de fin*******************************/
    printf("Vous avez bien répondu a %d questions et perdu à %d questions ",breponse,mreponse);

    return 0;
}
