/* Verifica em qual quadrante está a coordenada digitada pelo usuário */
#include <stdio.h>

int main () {
    float x,y;
    printf ("Digite os valores de x e y: \n");
    scanf ("%f%f",&x,&y);
    if (x>0 && y>0) {
        printf ("Primeiro quadrante!\n");
    }
    else if (x<0 && y>0) {
        printf ("Segundo quadrante!\n");
    }
    else if (x<0 && y<0) {
        printf ("Terceiro quadrante!\n");
    }
    else if (x>0 && y<0) {
        printf ("Quarto quadrante!\n");
    }
    else if (x>0 && y>0) {
        printf ("Primeiro quadrante!\n");
    }
    else if (x>0 && y>0) {
        printf ("Primeiro quadrante!\n");
    }
    else if (x==0 && y==0) {
        printf ("Na origem!\n");
    }
    else if (x!=0 && y==0) {
        printf ("No eixo dos x!\n");
    }
    else if (x==0 && y!=0) {
        printf ("No eixo dos y!\n");
    }
    return 0;
}
