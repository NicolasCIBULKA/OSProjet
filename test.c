#include <stdio.h>
#include "utils/memory.h"


int main(int argc, char const *argv[])
{
   // initialisation de la mémoire
   int n = initMemory(1000);
   if(n == -1){
      perror("Erreur dans l'allocation de la grande structure\n");
      exit(1);
   }

   // allocation avec myAlloc
   int* tab = myAlloc(sizeof(int) * 10);
   if(tab == NULL){
      perror("erreur d'allocation memoire\n");
      exit(2);
   }

   for (int i = 0; i < 9; i++)
   {
      tab[i] = 1;
   }

   // Liberation tableau
   myFree(tab);

   // Liberation structure
   freeMemory();
   
   return 0;
}
