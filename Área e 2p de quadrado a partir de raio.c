/* Disciplina de Introdução à Programação na Linguagem C
O programa a seguir irá calcular o perímetro e a área de um quadrado circunscrito em um círculo com a entrada do raio
O programa aceita raios do tipo float, não somente int */

#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    float perimetro,area;
    printf ("Digite um raio (em cm e POSITIVO) para o circulo para saber o perimetro e area do quadrado nele circuscrito: \n");
    scanf ("%f",&raio);
    perimetro = 8*raio;                                          // Como o perímetro é a soma dos 4 lados, e o lado é 2*raio, então perímetro=2*4*raio(8*raio)*/
    area = pow(2*raio,2);                                        // Como a área é lado^2 e sabemos que 2*raio=lado, então area=(2*raio)^2
    printf ("O perimetro do quadrado eh: %.2f cm \n",perimetro);
    printf ("A area do quadrado eh: %.2f cm2 \n",area);
    return 0;
}
