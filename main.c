#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[100] ;
    int longueurChaine = 0;

      printf("saisir votre variable\n");
      scanf("%s",&chaine);
    // On récupère la longueur de la chaîne dans longueurChaine
      longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
      printf("La chaine %s fait %d caracteres de longueur", chaine, longueurChaine);

    return 0;
}
