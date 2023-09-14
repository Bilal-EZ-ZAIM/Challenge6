#include <stdio.h>

// Challenge 6 : Circonférence d'un cercle
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================== Challenge 6 : Circonférence d'un cercle =====================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int r ;
    float c ;
    const float  pi = 3.14 ;
    printf("Ecrevez la valeur se rayon : ");
    scanf("%d" , &r);
    c = (float)2*pi*r;
    
    printf("la circonférence = %.2f",c);


    return 0;
}