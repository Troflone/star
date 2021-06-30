/////////////////////////////////////
/////////////////////////////////////
/////   Dessin d'une étoile     /////
/////   par Mathieu Bonnet      /////
/////////////////////////////////////
/////////////////////////////////////

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, taille;
    int espace = 0;
    printf("Entrez la taille de l'etoile souhaite : ");

    n = scanf("%d",&taille); //Récupération de la taille de l'etoile souhaité
    int taille2 = 2*taille;
    int taille6 = 6*taille;

    if (n == 1){
        if (taille > 0){ //Vérification que la taille demandée est supérieure à 0

            ////dessin du triangle supérieur////
            for (int i=0; i<taille; i++){
                for (int j=0; j<taille6; j++){
                    if(j != taille6/2 - 1 -espace && j != taille6/2 + espace - 1){
                        printf(" ");
                    }else{
                        printf("*");
                    }
                }
                printf("\n");
                espace++;
            }

            ////Dessin des triangles intermediaires////

            for (int i=0;i<taille2;i++){
                printf("*");
            }
            for (int i=0;i<taille2-1;i++){
                printf(" ");
            }
            for (int i=0;i<taille2;i++){
                printf("*");
            }
            printf("\n");

            espace = 0;
            for (int i=0;i<taille2-1;i++){
                if(i < taille){
                    espace ++;
                    for (int j=0; j<taille6; j++){
                        if(j != taille6 - 2 - espace && j != espace){
                            printf(" ");
                        }else{
                            printf("*");
                        }
                    }
                    printf("\n");
                }else{
                    if(i >= taille){
                        espace --;
                        for (int j=0; j<taille6; j++){
                            if(j != taille6 - 2 - espace && j != espace){
                                printf(" ");
                            }else{
                                printf("*");
                            }
                        }
                        printf("\n");
                    }
                }
            }

            for (int i=0;i<taille2;i++){
                printf("*");
            }
            for (int i=0;i<taille2-1;i++){
                printf(" ");
            }
            for (int i=0;i<taille2;i++){
                printf("*");
            }
            printf("\n");

            ////Dessin du triangle inferieur////
            espace = taille-1;
            for (int i=taille; i>0; i--){ //dessin du triangle supérieur
                for (int j=0; j<taille6; j++){
                    if(j != taille6/2 - 1 -espace && j != taille6/2 + espace - 1){
                        printf(" ");
                    }else{
                        printf("*");
                    }
                }
                printf("\n");
                espace--;
            }
        }
    }
    system("pause");
}
