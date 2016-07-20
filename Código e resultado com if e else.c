/* Fazer um programa C que leia um valor inteiro e um código, atribua o valor inteiro lido a uma variável resultado e, dependendo do conteúdo de código,
atualize o conteúdo da variável resultado com o conteúdo especificado na tabela ao lado e informe o valor obtido.

Utilize if-else:

Tabela:
Código          Resultado

1               Resultado + 5

2               Inalterado

3               Resultado – 2

4               Inalterado

5               Resultado – 2

6               2* (Resultado +1)

7               Inalterado

8                   0

9                   0

10                  0

11                 123
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cod,resultado;
    printf ("Digite um numero inteiro:\n");
    scanf ("%d",&num);
    printf ("Digite o codigo (de 1 ate 11):\n");
    scanf ("%d",&cod);
    resultado=num;
    if(cod==1)
    {
        resultado=resultado+5;
        printf ("O resultado eh: %d \n",resultado);
    }
    else if (cod==2 || cod==4 || cod==7)
    {
        resultado=resultado;
        printf ("O resultado eh: %d \n",resultado);
    }
    else if (cod==3 || cod==5)
    {
        resultado=resultado-2;
        printf ("O resultado eh: %d \n",resultado);
    }
    else if (cod==6)
    {
        resultado=2*(resultado+1);
        printf ("O resultado eh: %d \n",resultado);
    }
    else if (cod==8 || cod==9 || cod==10)
    {
        resultado=0;
        printf ("O resultado eh: %d \n",resultado);
    }
    else if (cod==11)
    {
        resultado=123;
        printf ("O resultado eh: %d \n",resultado);
    }
    else
    {
        printf ("ERRO! Voce nao digigou um codigo valido! \n");
    }
    return 0;
}
