// Etapa 2 de implementa��o do algoritmo de Criptografia na Linguagem C

// Cifra de C�sar com todas as possibilidades de altera��o de uma palavra
// Consiste em criar chaves com as pr�ximas letras do alfabeto relacionadas � mensagem!

// Disciplina: Introdu��o � Programa��o em Sa�de
// Professora: Cecilia Dias Flores

// Romeu da Luz e Vin�cius Franceschi


#include <stdio.h> // biblioteca para entrada/sa�da
#include <stdlib.h> // biblioteca usada para altera��o de cor

int main ()
{
    system ("color 3"); // muda cor para verde
    char word [30], manip [30]; // vetores para palavra e manipula��o das diferentes chaves
    int chave; // controla a impress�o das 25 chaves diferentes num loop
    int i, opcao; // contador / escolha de entre criptografar e sair
    do
    {
        printf ("\n\t\t=================================ETAPA 2=");
        printf ("\n\t\t=========================================");
        printf ("\n\t\t=============CIFRA DE CESAR==============");
        printf ("\n\t\t========================================="); // Menu do programa, � executado at� 2 ser digitado
        printf ("\n\t\t=========================================");
        printf ("\n\n\n\t\t============ 1-CRIPTOGRAFAR =============");
        printf ("\n\t\t================= 2-SAIR ================");
        printf ("\n\nDigite a opcao que deseja executar: ");
        scanf ("%d",&opcao);
        switch (opcao)
        {
        case 1:                                                 // se usu�rio digitar 1, criptografa a mensagem de 25 modos
            printf ("Digite a palavra a ser criptografada: \n");
            fflush (stdin);                                      // aceita espa�os, embora o espa�o seja alterado por qualquer caractere, pois o controle vai de 'a' at� 'z'
            gets (word);
            printf ("\n25 chaves possiveis: \n\n");
            printf ("\n");
            for(chave=1; chave<26; chave++)                     // controla a impress�o das 25 chaves
            {
                                                                // primeiro, imprime com a pr�xima letra correspondente, depois pula 2 letras...
                i=0;
                while(word[i] != '\0')
                {                                               // enquanto n�o for o final da palavra, executa...
                    manip[i] = word[i] + chave;                 // vari�vel de manipula��o recebe a palavra e soma a chave para obter a pr�xima
                    if((word[i] + chave) > 122)                 // 122 corresponde a letra 'z' em ASCII
                    {
                        manip[i] = manip[i]-26;                 // CONTROLE, se a chave for > que 'z', decrementa 26 para pegar 'a'
                    }
                    if((word[i] + chave) < 97)                  // 97 corresponde a letra 'a' em ASCII
                    {
                        manip[i] = manip[i]+26;                 // CONTROLE, se a chave for < que 'a', incrementa 26 para pegar 'z'
                    }
                    i++;
                }
                manip[i] = '\0';                                // vari�vel de manipula��o das chaves recebe '\0' (fim da string) quando sair dos la�os
                printf(" Chave %d: %s |", chave, manip);

                if(chave%3 == 0)                                // formata a impress�o de 3 chaves por linha
                {
                    printf("\n\n");
                }
            }
            printf("\n\n");
            system ("pause");
            system ("cls");
            break;
        case 2:                                             // se usu�rio escolher 2, finaliza o programa
            printf ("Fim!\n");
            printf ("Obrigado por testar nosso programa! \n");
            break;
        default:                                            // se usu�rio digitar qualquer tecla al�m de 1 ou 2, solicita digita��o correta
            printf ("Opcao invalida! Tente novamente!\n");
            system ("pause");
            system ("cls");
            continue;
        }
    } while (opcao!=2);
    return 0;
}
