#include <stdio.h>
int main()
{
int tab[50]; 
int n;
int i,k;
printf("Dimension du tableau: ");
scanf("%d", &n );
for (i=0; i<n; i++)
   {
     printf("Elément %d : ", i);
     scanf("%d", &tab[i]);
   }
printf("Tableau donné :\n");
for (i=0; i<n; i++)
    printf("%d ", tab[i]);
    printf("\n");
for (i=0, k=0; i<n; i++)
    {
        tab[k]=tab[i];
        k++;
    }
n=k;
printf("resultat du tableau :\n");
for (i=0; i<n; i++)
    printf("%d", tab[i]);
printf("\n");
}