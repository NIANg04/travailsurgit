#include <stdio.h>
int main()
{
 int tab[50]; 
 int n;
 int som=0;
 int i,k;
 printf("Dimension du tableau: ");
 scanf("%d", &n );
 for (i=0; i<n; i++)
   {
     printf("Elément %d : ", i);
     scanf("%d", &tab[i]);
   }
 printf("Les données du tableau:\n");
 for (i=0; i<n; i++)
     printf("%d ", tab[i]);
printf("\n");
for (i=0, k=0; i<n; i++)
{
    tab[k]=tab[i];
    if(tab[i]) k++;
}
n=k;
printf("Les valeur du tableau:\n");
for (i=0; i<n; i++)
printf(" %d", tab[i]);
printf("\n");
printf("La somme est de:\n");
for (i=0; i<n; i++)
{
som+=tab[i];
}
printf(" %d", som);
printf("\n");
}