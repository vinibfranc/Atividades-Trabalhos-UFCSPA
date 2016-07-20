/*Escrever	um	programa	que	lê	5	nomes	a	partir	do	teclado,	os	armazena	em	uma	matriz,	depois	os	imprime
na	ordem	inversa	de	leitura.	Os	nomes	têm	menos	de	8
letras	e	são	separados	por	brancos.*/

#include <stdio.h>

int main () {
    char nomes [5][16];
    char copia [16];
    int linha,coluna,contador;
    printf ("Digite os nomes que deseja guardar na matriz:\n");
    for (linha=0; linha<5; linha++)
    {
        gets (nomes[linha]);
    }
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<16; coluna++)
        {
        copia[coluna]=nomes[linha][coluna];
        }
        contador=0;
        for(coluna=0; coluna<16; coluna++)
        {
            if(coluna%2==0)
            {
               nomes[linha][coluna] = copia[contador];
               contador++;
            }
            else
            {
                nomes[linha][coluna] = ' ';
            }
        }
    }

    for (linha=4; linha>=0; linha--)
    {
        printf ("\n%s",nomes[linha]);
    }
    return 0;
}
