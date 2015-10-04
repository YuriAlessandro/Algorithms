#include <stdio.h>

int teste;

/* "teste" é uma váriavel global. Ela vai servir para saber se as somas das linhas, colunas e diagonais
são iguais a N*(N*N + 1)/2 --> condição para existir o quadrado mágico*/

int conferelinhas(int n, int quadrado[n][n]){
    int l, c, somal, condl = 0;

/* A função "conferelinhas" soma os valores de cada linha e confere se é igual ao teste (declarado em main).
A variável "l" corresponde as linhas e a variável "c" corresponde as colunas. */

    for(l = 0; l < n; l++){
        somal = 0;
        for(c = 0; c < n; c++){
            somal += (quadrado[l][c]);  /*"somal" (soma linhas) vai somando os números de uma determinada linha*/
            if(somal == teste) condl++;
            }
        }

/* A váriavel "condl" (condição das linhas) é incrementanda cada vez que a soma dos números passa no teste. Dessa
forma, se a "condl" for igual ao número de linhas da matriz, siginifica que todas as linhas passaram no teste.
A função"conferelinhas" retorna quantas linhas passam no teste*/

    return condl;
}

int conferecolunas(int n, int quadrado[n][n]){
    int l, c, somac, condc = 0;

/* A função "conferecolunas" soma os valores de cada coluna e se confere se é igual ao teste (declarado em main).*/

    for(c = 0; c < n; c++){
        somac = 0;
        for(l = 0; l < n; l++){
            somac += (quadrado[l][c]);  /*"somac" (soma colunas) vai somando os números das colunas*/
            if(somac == teste) condc++;
            }
        }

/* A váriavel "condc" (condição das colunas) é incrementanda cada vez que a soma dos números passa no teste.
Dessa forma, se ela for igual ao número de colunas da matriz, siginifica que todas passaram no teste. A função
"conferecolunas" retorna quantas colunas passam no teste*/

    return condc;
}

int conferediagonalp(int n, int quadrado[n][n]){
    int l, somad = 0, conddp = 0;

    /* A função "conferediagonalp" soma os valores da diagonal principal da matriz*/

    for(l = 0; l<n; l++){
        somad += quadrado[l][l];    /*"somad" soma os valores das diagonais (mesma linha e mesma coluna)*/
    }                               /*Por isso aqui a matriz declarada com [l][l]*/
    if(somad == teste) conddp++;    /*Se a soma da diagonal passar no teste, incrementamos "conddp" (condição
                                    da diagonal principal) em +1 e a retornamos*/
    return conddp;
}

int conferediagonals(int n, int quadrado[n][n]){
    int l, somad = 0, condds = 0;

    /* A função "conferediagonals" soma os valores da diagonal secundária da matriz*/

    for(l = n - 1; l >=0 ; l--){
        somad += quadrado[l][l];    /*"somad" soma os valores das diagonais (mesma linha e mesma coluna)*/
    }
    if(somad == teste) condds++;    /*Se a soma da diagonal passar no teste, incrementamos "condds" (condição
                                    da diagonal secundaria) em +1 e a retornamos*/
    return condds;
}


int main(){
    int i, j, n;

    printf("\nTestando se eh Quadrado Magico!\n");
    printf("\n\nEscreva qual o tamanho do seu quadrado: ");

    scanf("%i", &n);            /*O usuário entra com o tamanho da matriz*/

    if(n<=2){                   /*Só podemos trabalhar com matrizes com ordem maiores que 2*/
        printf("Quadrados magicos tem tamanho de 3x3 maior. Escolha um numero maior que 2.\n");
        return 0;
    }

    int quadrado[n][n];         /*Declarando a matriz, com tamanho NxN*/

    teste = n*(n*n+1)/2;        /*Condição para existir um quadrado mágico.*/

    printf("\n  O programa ira informar se os valores colocados formam um quadrado magico.\nEscreva os numeros do seu quadrado:\n");

    for(i = 0; i < n; i++){                 /*Recebendo os valores da matriz*/
        for(j= 0; j< n; j++){
            scanf("%i", &quadrado[i][j]);
        }
    }

/*Foram usadas quatro funções para:*/

    int resl = conferelinhas(n, quadrado);          /*Conferir as linhas*/
    int resc = conferecolunas(n, quadrado);         /*Conferir as colunas*/
    int resdp = conferediagonalp(n, quadrado);      /*Conferir a diagonal principal*/
    int resds = conferediagonals(n, quadrado);      /*Conferir a diagonal secundária*/

    printf("\n%i\t%i\t%i\t%i", resl, resc, resdp, resds);

    if(resl == n && resc == n && resdp == 1 && resds == 1) printf("\nEh quadrado magico!\n");

    /*OS CASOS "resl" E "resc": Como testadas nas funções, cada vez que a soma dos números de uma linha passa no
    teste, "condl" e "condc" são retornadas. Para o quadrado mágico existir, todas as linhas tem que passar no
    teste, então "condl" e "condc" (retornadas como "resl" e "resc") tem que ser iguais ao número de linhas e
    colunas, definidas como "n" pelo usuário.*/

    /*OS CASOS "resdp" E "resds": Após as funções testarem as diagonais principais e secundárias, elas incrementam
    "conddp" e "condds" em +1. Como só existe 1 diagonal de cada (principal e secundária), se o resultado
    retornado em "resdp" e "resds" for igual a 1, então as diagonais passaram no teste*/

    else printf("\nNao eh quadrado magico!\n");

    return 0;
}
