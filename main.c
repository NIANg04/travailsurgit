#include<stdio.h>
#include"tableau.h"
#include<stdlib.h>
#include<stdlib.h>
int main()
{
 int tab[50]; 
 int n;
 int som=0;
 int i,k,m;
 printf("Dimension du tableau: ");
 scanf("%d", &n);
 for (i=0; i<n; i++)
   {
     printf("Elément %d : ", i);
     scanf("%d", &tab[i]);
   }

tableau(tab, n);
 }