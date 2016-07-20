/* O programa a seguir irá calcular o conceito de um aluno baseado em algumas regras

Enunciado:

Faça um programa para imprimir o conceito de um aluno, dadas algumas regras. O programa deve ler do teclado as notas referentes a provas e trabalhos
(valores entre 0 e 10), o número de aulas e o número de faltas do aluno. A média final é calculada com a seguinte equação:
MF = 2.5*P1 + 2.5* P2 + 3.5*P3 + 0.75*(T1 + T2)

Com base nas notas e na frequência, o conceito do aluno é dado por:

•O aluno recebe conceito FF se a frequência for inferior a 75%
•O aluno recebe conceito D em qualquer dos seguintes casos:
–Nota da P1 ou P2 inferior a 3
–Nota zero em algum dos trabalhos
–MF inferior a 6
•Nos demais casos:
–MF >= 9: conceito A
–7.5 <= MF < 9: conceito B
–6 <= MF < 7.5: conceito C */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1,p2,p3,t1,t2,mediaf,frequencia;
    int nro_aulas,nro_faltas;
    printf ("Este programa ira calcular o conceito do aluno!\n");
    printf ("Para isso, voce deve digitar as NOTAS entre 0 e 10!!\n");
    printf ("Digite o numero de aulas:\n");
    scanf ("%d",&nro_aulas);
    printf ("Digite o numero de faltas:\n");    //Leitura do número de aulas e de faltas//
    scanf ("%d",&nro_faltas);
    frequencia=((nro_aulas-nro_faltas)*100)/nro_aulas;      //Cálculo da frequência do aluno
    if (frequencia<75){
        printf ("Você faltou mais que 25 por cento das aulas! Conceito FF!\n");      //Se o aluno faltou mais que 25% das aulas, recebe conceito FF
    }
    printf ("Digite sua nota na primeira prova:\n");
    scanf ("%f",&p1);
    printf ("Digite sua nota na segunda prova:\n");
    scanf ("%f",&p2);
    printf ("Digite sua nota na terceira prova:\n");        //Escrita e leitura das notas de provas e trabalhos
    scanf ("%f",&p3);
    printf ("Digite sua nota no primeiro trabalho:\n");
    scanf ("%f",&t1);
    printf ("Digite sua nota no segundo trabalho:\n");
    scanf ("%f",&t2);
    if (p1<3 || p2<3 || t1==0 || t2==0) {                   //Se o aluno tirou menos de 3 na p1 ou p2, ou zerou algum dos trabalhos, recebe conceito D
        printf("Conceito D!\n");
    }
    else {
        mediaf=(2.5*p1+2.5*p2+3.5*p3+0.75*(t1+t2))/10;
        printf ("Sua media eh: %.2f\n",mediaf);         //Atribuição das notas e dos pesos respectivos à variável mediaf
        if (mediaf<6){
            printf("Conceito D!\n");                            //Se mediaf for menor que 6, conceito D
        }
        if (mediaf>=6.5 && mediaf<7.5){                         //Se mediaf for maior ou igual a 6.5 e menor que 7.5, conceito C
            printf("Conceito C!\n");
        }
        if (mediaf>=7.5 && mediaf<9){                           //Se mediaf for maior ou igual a 7.5 e menor que 9, conceito B
            printf("Conceito B!\n");
        }
        if (mediaf>=9){                                         //Se mediaf for maior ou igual a 9, conceito A
            printf("Parabens! Conceito A!\n");
        }
     }
    return 0;
}
