// Etapa 2 de implementação do algoritmo de Criptografia na Linguagem C

// Cifra de César com todas as possibilidades de alteração de uma palavra
// Consiste em criar chaves com as próximas letras do alfabeto relacionadas à mensagem!

// Disciplina: Introdução à Programação em Saúde
// Professora: Cecilia Dias Flores

// Romeu da Luz e Vinícius Franceschi


#include <stdio.h> // biblioteca para entrada/saída
#include <stdlib.h> // biblioteca usada para alteração de cor

int main ()
{
    system ("color 3"); // muda cor para verde
    char word [30], manip [30]; // vetores para palavra e manipulação das diferentes chaves
    int chave; // controla a impressão das 25 chaves diferentes num loop
    int i, opcao; // contador / escolha de entre criptografar e sair
    do
    {
        printf ("\n\t\t=================================ETAPA 2=");
        printf ("\n\t\t=========================================");
        printf ("\n\t\t=============CIFRA DE CESAR==============");
        printf ("\n\t\t========================================="); // Menu do programa, é executado até 2 ser digitado
        printf ("\n\t\t=========================================");
        printf ("\n\n\n\t\t============ 1-CRIPTOGRAFAR =============");
        printf ("\n\t\t================= 2-SAIR ================");
        printf ("\n\nDigite a opcao que deseja executar: ");
        scanf ("%d",&opcao);
        switch (opcao)
        {
        case 1:                                                 // se usuário digitar 1, criptografa a mensagem de 25 modos
            printf ("Digite a palavra a ser criptografada: \n");
            fflush (stdin);                                      // aceita espaços, embora o espaço seja alterado por qualquer caractere, pois o controle vai de 'a' até 'z'
            gets (word);
            printf ("\n25 chaves possiveis: \n\n");
            printf ("\n");
            for(chave=1; chave<26; chave++)                     // controla a impressão das 25 chaves
            {
                                                                // primeiro, imprime com a próxima letra correspondente, depois pula 2 letras...
                i=0;
                while(word[i] != '\0')
                {                                               // enquanto não for o final da palavra, executa...
                    manip[i] = word[i] + chave;                 // variável de manipulação recebe a palavra e soma a chave para obter a próxima
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
                manip[i] = '\0';                                // variável de manipulação das chaves recebe '\0' (fim da string) quando sair dos laços
                printf(" Chave %d: %s |", chave, manip);

                if(chave%3 == 0)                                // formata a impressão de 3 chaves por linha
                {
                    printf("\n\n");
                }
            }
            printf("\n\n");
            system ("pause");
            system ("cls");
            break;
        case 2:                                             // se usuário escolher 2, finaliza o programa
            printf ("Fim!\n");
            printf ("Obrigado por testar nosso programa! \n");
            break;
        default:                                            // se usuário digitar qualquer tecla além de 1 ou 2, solicita digitação correta
            printf ("Opcao invalida! Tente novamente!\n");
            system ("pause");
            system ("cls");
            continue;
        }
    } while (opcao!=2);
    return 0;
}
