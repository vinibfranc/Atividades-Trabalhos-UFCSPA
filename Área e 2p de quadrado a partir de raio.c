/* Disciplina de Introdu��o � Programa��o na Linguagem C
O programa a seguir ir� calcular o per�metro e a �rea de um quadrado circunscrito em um c�rculo com a entrada do raio
O programa aceita raios do tipo float, n�o somente int */

#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    float perimetro,area;
    printf ("Digite um raio (em cm e POSITIVO) para o circulo para saber o perimetro e area do quadrado nele circuscrito: \n");
    scanf ("%f",&raio);
    perimetro = 8*raio;                                          // Como o per�metro � a soma dos 4 lados, e o lado � 2*raio, ent�o per�metro=2*4*raio(8*raio)*/
    area = pow(2*raio,2);                                        // Como a �rea � lado^2 e sabemos que 2*raio=lado, ent�o area=(2*raio)^2
    printf ("O perimetro do quadrado eh: %.2f cm \n",perimetro);
    printf ("A area do quadrado eh: %.2f cm2 \n",area);
    return 0;
}
