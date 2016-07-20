/*O programa irá verificar se, dadas as medidas X,Y e Z,elas formam um triângulo. Caso formem, será dito se é triângulo equilátero,
isósceles ou escaleno. Se não formarem, será escrita uma mensagem*/

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
        printf ("Os lados NAO formam um triangulo!");          //Verificação se não formam triângulo//
    }
    else {
        if (x==y && y==z && x==z){
            printf ("As medidas formam um triangulo EQUILATERO!\n"); //Se todos os lados são inguais, triângulo Equilátero//
        }
        if (x==y && x!=z || y==z && y!=x || z==x && z!=y) {
            printf ("As medidas formam um triangulo ISOSCELES!\n"); //Se dois lados são iguais e um diferente, triângulo Isósceles//
        }
        if (x!=y && y!=z && x!=z){
            printf ("As medidas formam um triangulo ESCALENO!\n"); //Se todos os lados são diferentes, triângulo Escaleno//
        }
    }
    return 0;
}


