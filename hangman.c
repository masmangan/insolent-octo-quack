/*
https://en.wikipedia.org/wiki/Hangman_%28game%29
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create( char s[], char w[] );
void clear();

void create( char s[], char w[] ) {
    int len = strlen( s );
    int j;
    for ( j = 0 ; j < len ; j++ )
        w[ j ] = '-';
    w[ len ] = '\0';
}

void clear() {    
    // FIXME: deve ficar no início da tela
    //int i;
    //for ( i = 0 ; i < 20 ; i++ )
    //    printf("\n");
}

int main() {
    char secret[100];
    char word[100];
   
    printf("*Jogo da Forca, (c) 2015*\n");

    printf("Informe a palavra secreta: ");
    scanf("%s", secret);

    clear();    
    create(secret, word);

    printf("[%s]\n", word);

    // TODO: completar o jogo

    printf("*FIM*\n");

    return EXIT_SUCCESS;
}











