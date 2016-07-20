/*
//Etapa 1 de implementação do algoritmo de Criptografia na Linguagem C
// Disciplina: Introdução à Programação em Saúde
// Professora: Cecilia Dias Flores
// Romeu da Luz e Vinícius Franceschi
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>




/*
|||||FUNÇÃO QUE DESENHA O MENU
*/
void menu()
{

printf("\n\t               ALGORITMO DE CRIPTOGRAFIA     ");
printf("\n\t ___  ______  ______  ______  ______  ______  ______  ___");
printf("\n\t  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__ ");
printf("\n\t (______)(______)(______)(______)(______)(______)(______)");
printf("\n\t    ");
printf("\n\t ||  ad8888888888ba  ");
printf("\n\t ||  dP'         `''8b,  ");
printf("\n\t ||  8  ,aaa,       ''Y888a     ,aaaa,     ,aaa,  ,aa,  ");
printf("\n\t ||  8  8' `8           '8baaaad''''baaad'''''baad''8b  ");
printf("\n\t ||  8  8   8              '''      '''      '''    8b  ");
printf("\n\t ||  8  8, ,8         ,aaaaaaaaaaaaaaaaaaaaaaaddddd88P  ");
printf("\n\t ||  8  ''''       ,d8''''  ");
printf("\n\t ||  Yb,         ,ad8''     ");
printf("\n\t ||   'Y8888888888P'' ");
printf("\n\t ___  ______  ______  ______  ______  ______  ______  ___");
printf("\n\t  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__ ");
printf("\n\t (______)(______)(______)(______)(______)(______)(______)");
printf("\n\t    ");
printf("\n\t ||=>  1: Criptografar  2: (1) + comentarios    3: Sair  ");
printf("\n\t    ");

}

/*
|||||HASH
*/

char hash(char string[256],int modo)
{
/* a variavel modo controla a exibição de comentarios do processo na tela*/

        char chave [32]="";
        char nospace[256]="";
        char cripto[256]="";
        char separadores[]= " ,\t\n";
        char *partes;
        char palavra[32]="";
        char car_aux;
        int a,b;



        printf("\n\n\n\t  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ");
        printf("\n\t (_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_)\n");
        printf("\n\t |MENSAGEM|=========>> %s",string);

        if( modo!= 1){
        printf("\n\t |----|INVERTIDA|--->> ");
        }
        partes = strtok( string, separadores );

        if(modo==1){

        printf( "\n\n\t||Comentarios||||||||||||||||||||||||||||||||||||||||||||\n\n");
         printf( "\t|| Apresenta cada palavra, na ordem natural e inversa:");
            }


        while( partes != NULL )
        {

                 strcpy( palavra,partes);
                 strncat(chave, palavra, 1);
                 for(a = 0, b = strlen(palavra) - 1;a < b; a++, b--)
                 {
                        car_aux = palavra[a];
                        palavra[a] = palavra[b];
                        palavra[b] = car_aux;
                 }

                  if(modo==1){
                   /*
                   //mostrar cada palavra da mensagem, na ordem natural e inversa:
                   */
                    printf( "\n\t||-- %s  -  %s ",partes, palavra );
                 }else{
                    printf("%s ",palavra);
                 }
                 strcat(nospace, palavra);
                 partes = strtok( NULL, separadores );

        }




         if(modo==1){
         printf("\n\n\t|opera o XOR em cada caractere ( mensagem^chave):");
         }

         for(a = 0, b= 0 ; a < strlen(nospace); a++ , b++ )
             {

                cripto[a] = nospace[a]^chave[b];
                if(modo==1){
                   /*
                   //cada char e o resultado do XOR:
                   */
                 printf("\n\t||-- %i -> %c ^ %c : %x ",a,nospace[a],chave[b],cripto[a]);

                }

                if( b==strlen(chave)-1){  b=-1; };
             }


      if(modo==1){
      printf( "\n\n\t|||||||||||||||||||||||||||||||||||||||||||||||||");
      printf("\n\n");
      }

              printf("\n\t |----|EMENDADO|->> %s",nospace);
              printf("\n\t |CHAVE|============>> %s",chave);
              printf("\n\t |HASH|=============>> ");
              for(a = 0 ; a < strlen(nospace); a++)
                 {
                  printf("%x",cripto[a]);
                 }

        printf("\n\t  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ ");
        printf("\n\t (_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_)\n\n");

        free(partes);



return cripto;
}




/*
|||||APLICAÇÃO
*/
int main()
{
setlocale (LC_ALL, "Portuguese");

system ("color 7");

char mensagem[256];
int opcao;
do
    {
        menu();

        printf ("\n\nDigite a opcao que deseja executar: ");
        scanf ("%i",&opcao);
            switch (opcao)
            {
                case 1:
                {

                 printf ("\nDigite a mensagem a ser criptografada: \n");
                 fflush (stdin);
                 gets(mensagem);
                 system("cls");
                 hash(mensagem,0);

                  break;
                }

                case 2:
                {

                 printf ("\nDigite a mensagem a ser criptografada:\n" );
                  fflush (stdin);
                 gets(mensagem);
                 system("cls");
                 hash(mensagem,1);

                  break;
                }

                case 3:
                {
                       system ("pause");
                       system("cls");
                       printf ("Fim do programa!\n");



printf("\n\t\t\t ___________.___  _   _ ");
printf("\n\t\t\t\\_   _____/|   | /     \\  ");
printf("\n\t\t\t  |    __) |   |/  \\ /  \\ ");
printf("\n\t\t\t  |    \\   |   /    Y    \\");
printf("\n\t\t\t \\___  /   |___\_____|__  /");
printf("\n\t\t\t     \\/                \\/\n\n\n ");
/*
                       printf("\n\t\t\t ★─▄█▀▀║░▄█▀▄║▄█▀▄║██▀▄║─★");
                       printf("\n\t\t\t ★─██║▀█║██║█║██║█║██║█║─★");
                       printf("\n\t\t\t ★─▀███▀║▀██▀║▀██▀║███▀║─★");
                       printf("\n\t\t\t ★───────────────────────★");
                       printf("\n\t\t\t ★───▐█▀▄─ ▀▄─▄▀ █▀▀──█──★");
                       printf("\n\t\t\t ★───▐█▀▀▄ ──█── █▀▀──▀──★");
                       printf("\n\t\t\t ★───▐█▄▄▀ ──▀── ▀▀▀──▄──★");
*/

                   break;
                }

                default:
                {
                    printf ("Opção inválida! Tente novamente!\n");
                    system ("pause");
                    system("cls");
                    continue;
                }
             }

        system ("pause");
       system("cls");



} while (opcao != 3);
  return 0;
}

