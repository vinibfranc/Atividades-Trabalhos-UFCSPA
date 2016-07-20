/* Algoritmo Bubble Sort (ordenação de vetor) */

#include <stdio.h>
#define TAMANHO 5

void bubble_sort1 (int vet[],int n)
{
    int fim, i, flag, aux;
    fim=n-1;
    do
    {
        flag=0;
        for (i=0; i<n-1; i++)
        {
            if (vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                flag=1;
            }

        }
        fim--;
    } while (flag==1 && fim>0);
}

int busca_quando_ja_ordenado (int vet2[],int n_elem, int valor)
{
    int saida, j=0;
    int maior=0;
    while ((!maior) && (j<n_elem))
    {
        if (valor<=vet2[j])
        {
            maior=1;
        }
    j++;
    }
    if (valor==vet2[j-1])
    {
        saida=j-1;
    }
    else
    {
        saida=-1;
    }
    return saida;
}
int main ()
{
    int ordem [TAMANHO];
    int k,x,posic;
    for (k=0; k<TAMANHO; k++)
    {
        printf ("Digite um valor inteiro: \n");
        scanf ("%d",&ordem [k]);
    }
    bubble_sort1 (ordem, TAMANHO);
    printf ("\nVetor ordenado: \n");
    for (k=0; k< TAMANHO; k++)
    {
        printf ("%d \n", ordem [k]);
    }
    printf ("\n");
    printf ("Entre com um numero inteiro para busca: \n");
    scanf ("%d",&x);
    posic= busca_quando_ja_ordenado (ordem, TAMANHO, x);
    if (posic==-1)
    {
        printf ("Valor %d nao presente no vetor: \n",x);
    }
    else
    {
        printf ("Valor %d encontra-se no indice %d do vetor: \n",x,posic);
    }
    return 0;
}

