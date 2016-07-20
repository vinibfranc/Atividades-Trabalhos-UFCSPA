/*Programa que entrevista pessoas, perguntando seu clube, salario e cidade de origem!
Saídas: número de torcedores por clube, media salarial de gremistas e colorados, quantas pessoas POA que não torcem para nenhum dos dois e número de
pessoas entrevistadas*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int clube, cidade, k, n_gremio, n_inter, outro_t, n_poa;
    char add_dado;
    float salario, soma_sg, soma_si;
    k=0;
    n_gremio=0;
    n_inter=0;
    outro_t=0;
    salario=0;
    soma_sg=0;
    soma_si=0;
    n_poa=0;
    add_dado='S';
    while (add_dado == 's' || add_dado == 'S') {
        k=k+1;
        printf ("Clube: (1-Gremio; 2-Internacional; 3-Outros): \n");
        scanf ("%d", &clube);
        printf ("Digite seu salario: \n");
        scanf ("%f",&salario);
        if (clube==1) {
            n_gremio=n_gremio+1;
            soma_sg=soma_sg+salario;
        }
        else if (clube==2) {
            n_inter=n_inter+1;
            soma_si=soma_si+salario;
        }
        else if (clube !=1 && clube !=2) {
            outro_t=outro_t+1;
        }
        else {
            printf ("Time invalido!\n");
        }
        printf ("Digite sua cidade de origem (1-Porto Alegre;2-Outras): \n");
        scanf ("%d", &cidade);
        if (cidade==1 && (clube!=1 && clube!=2)) {
            n_poa=n_poa+1;
        }
        printf ("Voce deseja informar mais dados (s/n): \n");
        scanf (" %c", &add_dado);
    }
    printf ("\n");
    printf ("==========================\n");
    printf ("Resumo dos dados colhidos\n");
    printf ("==========================\n");
    printf ("\n");
    printf ("Torcedores: \n");
    printf ("Gremio: %d \n",n_gremio);
    printf ("Internacional: %d \n",n_inter);
    printf ("Outros clubes: %d \n",outro_t);
    printf ("\n");
    printf ("Media dos Salarios:\n");
    printf ("Torcedores do Gremio: R$ %.2f \n",soma_sg/n_gremio);
    printf ("Torcedores do Internacional: R$ %.2f \n",soma_si/n_inter);
    printf ("\n");
    printf ("Numero de pessoas nascidas de POA que nao torcem para Gremio ou Inter: %d \n",n_poa);
    printf ("Numero de entrevistados: %d \n",k);
    return 0;
}
