/* Faça	um	programa	para	ler	via	teclado	9	valores
inteiros	referentes	a	uma	matriz	3x3.	A	leitura	deverá	ser
feita	por	linhas	da	matriz.	Ou	seja,	ler	todos	elementos	de
uma	linha,	então	começar	a	ler	a	próxima	linha.	No	final,
imprima	a	matriz	transposta,	cuidando	para	que	cada
linha	da	matriz	fique	em	uma	linha	separada. */

#include <stdio.h>
#define TLINHA 3
#define TCOLUNA 3

int main ()
{
    int matriz [3][3];
    int linha,coluna;
    for (coluna=0;coluna<TCOLUNA;coluna++)
    {
        printf ("Entre com um elemento da primeira linha da matriz: \n");
        scanf ("%d",&matriz[0][coluna]);
    }
    for (coluna=0;coluna<TCOLUNA;coluna++)
    {
        printf ("Entre com um elemento da segunda linha da matriz: \n");
        scanf ("%d",&matriz[1][coluna]);
    }
    for (coluna=0;coluna<TCOLUNA;coluna++)
    {
        printf ("Entre com um elemento da terceira linha da matriz: \n");
        scanf ("%d",&matriz[2][coluna]);
    }
    printf ("Matriz transposta: \n");
    for (linha=0;linha<TLINHA;linha++) {
        for (coluna=0;coluna<TCOLUNA;coluna++) {
            printf ("%d     ",matriz[coluna][linha]);
        }
        printf ("\n");
    }

    return 0;
}
