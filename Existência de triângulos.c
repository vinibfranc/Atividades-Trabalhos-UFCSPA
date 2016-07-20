/*O programa ir� verificar se, dadas as medidas X,Y e Z,elas formam um tri�ngulo. Caso formem, ser� dito se � tri�ngulo equil�tero,
is�sceles ou escaleno. Se n�o formarem, ser� escrita uma mensagem*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,z;
    printf ("Este programa ira verificar a existencia de um triangulo e seus tipos:\n");
    printf ("Digite a primeira medida (x):\n");
    scanf ("%f",&x);
    printf ("Digite a segunda medida (y):\n");              //Escrita e leitura de X,Y e Z//
    scanf ("%f",&y);
    printf ("Digite a terceira medida (z):\n");
    scanf ("%f",&z);
    if (x>y+z || y>x+z || z>x+y){
        printf ("Os lados NAO formam um triangulo!");          //Verifica��o se n�o formam tri�ngulo//
    }
    else {
        if (x==y && y==z && x==z){
            printf ("As medidas formam um triangulo EQUILATERO!\n"); //Se todos os lados s�o inguais, tri�ngulo Equil�tero//
        }
        if (x==y && x!=z || y==z && y!=x || z==x && z!=y) {
            printf ("As medidas formam um triangulo ISOSCELES!\n"); //Se dois lados s�o iguais e um diferente, tri�ngulo Is�sceles//
        }
        if (x!=y && y!=z && x!=z){
            printf ("As medidas formam um triangulo ESCALENO!\n"); //Se todos os lados s�o diferentes, tri�ngulo Escaleno//
        }
    }
    return 0;
}


