#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 10
#define TAILLECHAINE 255

//procédure
void afficheEcran(); //Le prototype de la procedure afficheEcran

void procSommeEntier(int, int,int *);

void initTabEntiers(int[]);

void initTab2DEntiers(int[][TAILLE]);

void entrezNom(char[]);

//fct
int sommeEntiers(int, int);






int main()
{
    int nResultat=0;
    int n_nb1=0, n_nb2=0;

   // afficheEcran();

    //utilisateur
    //printf("Entrez le premier entier : \n");
    //scanf("%d",&n_nb1);
    //printf("Entrez le second entier : \n");
    //scanf("%d",&n_nb2);

    //nResultat=sommeEntiers(n_nb1,n_nb2);

    //printf("Le resultat de la somme est : %d",nResultat);



    //Procédure passage par adresse

   // procSommeEntier(n_nb1,n_nb2,&nResultat);

    //printf("Le resultat de la somme est : %d",nResultat);


    //Tableaux

    //Tableau d'entiers
   // int n_TabEntier[TAILLE];

   // initTabEntiers(n_TabEntier);


    //int n_TaB2dimEntier[TAILLE][TAILLE];


    //initTab2DEntiers(n_TaB2dimEntier);

    //Tableau de caractères ou chaine

    char str_Nom[TAILLECHAINE];


    entrezNom(str_Nom);

    printf("Votre Nom est : %s",str_Nom);


    return 0;
}


/*****************************************************************************
But : Afficher une chaine à l'écran

Entrees:/

Sorties :/ Affichage écran

Description : Cette procédure permet l'affichage à l'écran d'une chaine
de caractères

******************************************************************************/

void afficheEcran(){

    printf("Bienvenue dans le programme de la somme\n");

}


/*****************************************************************************
But : Somme de deux entiers passés en argument

Entrees: deux entier

Sorties :retour de la somme en entier

Description : Cette fonction retourne la somme de deux entiers passés en argument

******************************************************************************/

int sommeEntiers(int n_a, int n_b){

 int nResSomme=0;

 nResSomme=n_a+n_b;

 return nResSomme;

}


/*****************************************************************************
But : Somme de deux entiers passés en argument et modification du resultat également passé
en argument

Entrees: deux entier et un pointeur d'entier

Sorties :retour de la somme en entier modifié à l'adresse de l'entier résultat (passage par adresse)

Description : Cette procédure calcul la somme de deux entiers passés en argument.

******************************************************************************/
void procSommeEntier(int n_a, int n_b,int *n_ResSomme){

    *n_ResSomme=n_a+n_b;


}

/*****************************************************************************
But : Initialisation d'un tableau d'entiers

Entrees : Tableau d'entiers

Sorties : Les valeurs => références du tableau modifiées

Description : cette procédure initialise un tableau d'entiers

******************************************************************************/

void initTabEntiers(int n_TabEntier[TAILLE]){

    int n_i=0;

    for(n_i=0;n_i<TAILLE;n_i++){

        n_TabEntier[n_i]=0;
    }

}

/*****************************************************************************
But : Initialisation d'un tableau d'entiers à deux dimensions

Entrees : Tableau d'entiers à deux dimensions

Sorties : Les valeurs => références du tableau modifiées

Description : cette procédure initialise un tableau d'entiers à deux dimension

******************************************************************************/

void initTab2DEntiers(int n_Tab2DEntier[TAILLE][TAILLE]){

  int n_i=0, n_j=0;

    for(n_i=0;n_i<TAILLE;n_i++){
        for(n_j=0;n_j<TAILLE;n_j++){

            n_Tab2DEntier[n_i][n_j]=0;
        }
    }

}

/*****************************************************************************
But : Saisie d'un Nom dans tableau de caractères

Entrees : Tableau de caractères

Sorties : Tableau de caractères modifié

Description : cette procédure demande de saisir un nom et le stock dans un tableau de
caractères

******************************************************************************/
void entrezNom(char str_Nom[TAILLECHAINE]){

    printf("Entrez votre Nom :\n");
    scanf("%s",str_Nom);

}
