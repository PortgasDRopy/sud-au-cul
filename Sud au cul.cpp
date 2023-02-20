// Sud au cul.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    char * tableau = construTableau();
}

char * construTableau()
{
    int dif;
    int taille;
    printf("Veuillez choisir un niveau de difficulté (1, 2 ou 3) : ");
    fflush(stdout);
    scanf("[%d]", &dif);
    if (dif == 1) {
        int taille = 10;
        int tableau[10];
    }
    else {
        if (dif == 2) {
            int taille = 15;
            int tableau[15];
        }
        else {
            int taille = 20;
            int tableau[20];
        }
    }
    char* ligne;
    int compteur;
    int compteur2;
    for (compteur = 0; compteur <= taille; compteur++)
    {
        for (compteur2 = 0; compteur2 <= taille; compteur2++)
        {
            if (compteur == 0)
            {
                if (compteur2 == 0)
                {
                    ligne = ligne + "-";
                }
                else {
                    if (compteur2 == taille)
                    {
                        ligne = ligne + " " + "-";
                    }
                    ligne = ligne + " " + compteur2;
                }
            }
            else {
                if (compteur == taille)
                {
                    if (compteur2 == 0)
                    {
                        ligne = ligne + "-";
                    }
                    else {
                        if (compteur2 == taille)
                        {
                            ligne = ligne + " " + "-";
                        }
                        ligne = ligne + " " + compteur2;
                    }
                }
                else {
                    if (compteur2 == 0)
                    {
                        ligne = ligne + compteur;
                    }
                    else {
                        if (compteur2 == taille)
                        {
                            ligne = ligne + " " + compteur;
                        }
                        else {
                            ligne = ligne + " [ ]";
                        }
                    }
                }
            }
        }
        if (compteur == 0)
        {
            
        }
        else {
            
        }
    }
}
