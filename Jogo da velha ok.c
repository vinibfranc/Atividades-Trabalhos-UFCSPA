/*Jogo da velha desenvolvido para a disciplina de Introdução à Linguagem de Programação C*/
#include <stdio.h>
#include <stdlib.h>

int atualiza_tela (char pos [9]) //Função que atualiza a tela a cada jogada//
{
    system ("cls");
    printf ("\t\t===========================================\n");
    printf ("\t\t============== JOGO DA VELHA ==============\n");
    printf ("\n\t\t=== Tabuleiro ========= Jogo da velha====\n");
    printf ("\n\t\t    a | b | c           %c | %c | %c",pos [0],pos [1],pos [2]);
    printf ("\n\t\t    __| __| __          __| __| __ ");
    printf ("\n\t\t    d | e | f           %c | %c | %c",pos [3],pos [4],pos [5]);
    printf ("\n\t\t    __| __| __          __| __| __ ");
    printf ("\n\t\t    g | h | i           %c | %c | %c",pos [6],pos [7],pos [8]);
    printf ("\n\n\n\t\t========================================\n");
    printf ("\n\t\tJOGADOR 1 -> [O]        JOGADOR 2 -> [X]");
    printf ("\n\n\t\t========================================\n");
}

int main ()
{
    char posicoes [9] = {'a','b','c','d','e','f','g','h','i'};//vetor com as posições do tabuleiro
    char c1; //jogada escolhida pelo jogador
    int player; //decisão de quem irá começar
    int n_jogadas=0; //contador de jogadas
    char simbolo='X'; // simbolo usado pelos jogadores
    char novo_jogo='s'; //decisão se haverá novo jogo ou não
    atualiza_tela (posicoes); //chamada da unção atauliza_tela
    while (novo_jogo=='s' || novo_jogo=='S') //laço que será repetido até que novo_jogo seja respondio com algo diferente de 's' ou 'S'
    {
        printf ("\nJogador que vai comecar (1 ou 2): \n"); //escolha do jogador a começar
        scanf ("%d",&player);
        if (player==1)
        {
            simbolo='O'; //se o jogador for 1, recebe a 'O'
        }
        else if (player==2)
        {
            simbolo='X'; //se o jogador for 2, recebe o 'X'
        }
        else
        {
            printf ("Jogador invalido!\n"); //se o jogador não for 1 ou 2, volta para o início do while até ler um valor válido (1 ou 2)
            system ("pause");
            continue;
        }
            for (n_jogadas=0; n_jogadas<=8; n_jogadas++) //contador de jogadas, de 0 a 8 (9 jogadas)
            {
            atualiza_tela (posicoes);
            printf ("\nJOGADOR %d - Escolha uma jogada: \n",player);
            scanf (" %c",&c1); //escolha da jogada de 'a' a 'i'
            switch (c1)
                {
                case 'a':
                    if (posicoes [0] == c1)
                    {
                        posicoes[0] = simbolo; //posição recebe o simbolo correspondente ao jogador
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n"); // se posição já está ocupada, volta para a escolha do usuário até ser jogada ser válida
                        n_jogadas--; // decrementa a variável n_jogadas, pois a jogada não é válida
                        system ("pause");
                        continue;
                    }
                case 'b':
                    if (posicoes [1] == c1)
                    {
                        posicoes[1] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'c':
                    if (posicoes [2] == c1)
                    {
                        posicoes[2] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'd':
                    if (posicoes [3] == c1)
                    {
                        posicoes[3] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'e':
                    if (posicoes [4] == c1)
                    {
                        posicoes[4] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'f':
                    if (posicoes [5] == c1)
                    {
                        posicoes[5] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'g':
                    if (posicoes [6] == c1)
                    {
                        posicoes[6] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'h':
                    if (posicoes [7] == c1)
                    {
                        posicoes[7] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                case 'i':
                    if (posicoes [8] == c1)
                    {
                        posicoes[8] = simbolo;
                        break;
                    }
                    else
                    {
                        printf ("Posicao ja ocupada!\n");
                        n_jogadas--;
                        system ("pause");
                        continue;
                    }
                default:
                    printf ("Posicao invalida!"); // se posição for inválida, faz o usuário digitar novamente
                    n_jogadas--;
                    system ("pause");
                    continue;
                }
                atualiza_tela (posicoes); // atualização de tela
                if ((posicoes [0]==simbolo && posicoes [1]== simbolo && posicoes [2]== simbolo) ||
                    (posicoes [3]==simbolo && posicoes [4]== simbolo && posicoes [5]== simbolo) ||
                    (posicoes [6]==simbolo && posicoes [7]== simbolo && posicoes [8]== simbolo) ||
                    (posicoes [0]==simbolo && posicoes [3]== simbolo && posicoes [6]== simbolo) ||  //testa a cada jogada para ver se há algum vencedor
                    (posicoes [1]==simbolo && posicoes [4]== simbolo && posicoes [7]== simbolo) ||
                    (posicoes [2]==simbolo && posicoes [5]== simbolo && posicoes [8]== simbolo) ||
                    (posicoes [0]==simbolo && posicoes [4]== simbolo && posicoes [8]== simbolo) ||
                    (posicoes [2]==simbolo && posicoes [4]== simbolo && posicoes [6]== simbolo)
                    )
                {
                    printf ("\n\nO JOGADOR %d VENCEU!\n",player); // caso haja vencedor, pergunta se deseja jogar novamente
                    system ("pause");
                    printf ("\nNovo jogo? (S para continuar, qualquer outra tecla para sair!)\n");
                    scanf (" %c",&novo_jogo);
                    posicoes [0] = 'a';
                    posicoes [1] = 'b';
                    posicoes [2] = 'c';
                    posicoes [3] = 'd';
                    posicoes [4] = 'e';  //reseta as variáveis para o novo jogo
                    posicoes [5] = 'f';
                    posicoes [6] = 'g';
                    posicoes [7] = 'h';
                    posicoes [8] = 'i';
                    n_jogadas = 0;
                }
                if (n_jogadas==8) //verifica se deu empate
                {
                    printf ("\n\nDEU VELHA!!\n");
                    printf ("\nNovo jogo? (S para continuar, qualquer outra tecla para sair!)\n");
                    scanf (" %c",&novo_jogo);
                    posicoes [0] = 'a';
                    posicoes [1] = 'b';
                    posicoes [2] = 'c';
                    posicoes [3] = 'd';
                    posicoes [4] = 'e';
                    posicoes [5] = 'f';
                    posicoes [6] = 'g';
                    posicoes [7] = 'h';
                    posicoes [8] = 'i';
                    n_jogadas = 0;
                }

                if (player==1)
                {
                    player=2;
                }
                else if (player==2)
                {
                    player=1;
                }
                if (player==1)  // interação entre os usuários
                {
                simbolo='O';
                }
                else if (player==2)
                {
                simbolo='X';
                }


            }
    }
    printf ("Fim! Obrigado por jogar!"); // término do jogo (quando após alguma vitória, não é diitado o caracter 's' ou 'S'
    return 0;
}
