#include <stdio.h>
#include <stdlib.h>

//***Exo2.Question1**
void AffichageEntier(){
  int entier = 0;

  printf("Saisissez une entier: ");
  scanf("%d", &entier);
  printf("Affichage Entier: %d\n", entier);

}

//***Exo2.Question2**
void AffichageUtilisateur(){

  char *nom = "Elodie";
  int age = 0;

  printf("Saisissez votre age: ");
  scanf("%d", &age);

  printf("Bonjour Mdme %s. Vous avez %d ans\n", nom, age);

}


int main(){

 AffichageEntier(); 
 AffichageUtilisateur();

 return 0;
}