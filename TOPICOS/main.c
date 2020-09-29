# inclui  < stdio.h >
# inclui  < stdlib.h >
# inclua  < locale.h >

int  main ( int argc, char * argv []) {
    setlocale (LC_ALL, " português " );
    int x, y;

    printf ( "Informe o valor inteiro de X para ver o (s) ponto (s) ganho (s) = " );
    scanf ( " % d " , & x);
    printf ( "Informe o valor de Y: " );
    scanf ( " % d " , & y);

    if ((x> 10 || x <- 10 ) || (y> 10 || y <- 10 )) {
        printf ( "Você errou o alvo !!! " );
    } else  if ((x> = - 1 && x <= 1 ) && (y> = - 1 && y <= 1 )) {
        printf ( " Voce acertou o alvo de 10 pontos " );
    } else  if ((x> = - 5 && x <= 5 ) && (y> = - 5 && y <= 5 )) {
        printf ( " Voce acertou o alvo de 5 pontos " );
    } else  if ((x> = - 10 && x <= 10 ) && (y> = - 10 && y <= 10 )) {
        printf ( " Voce acertou o alvo de 1 ponto " );
    }

    return  0 ;
