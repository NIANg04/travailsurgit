#include<stdio.h>
int tableau (int tab[], int n)
{ 
 int som=0;
 int i,k,m;
printf("Les données du tableau:\n");
 for (i=0; i<n; i++)
     printf("%d ", tab[i]);
printf("\n");
for (i=0, k=0; i<n; i++)
{
    tab[k]=tab[i];
    if(tab[i]!=0 && k++);
}
n=k;
printf("Les valeurs du tableau:\n");
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
printf("Les valeurs de l'inverse:\n");
for (i=0, k=n-1; i<k; i++, k--)
{
  m=tab[i];
  tab[i]=tab[k];
  tab[k]=m;
}
printf(" %d", tab[i]);
printf("\n");
}
