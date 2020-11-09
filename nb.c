# include <stdio.h>
/* ce programme permet de faire une opération ternaire */
int main(){
    
    int a;
    printf("Veuillez saisir une valeur");
    scanf("%d",&a);
    printf("%d est %s ",a,(a%2==0) ? "Paire": "Impaire");
    return 0;
}