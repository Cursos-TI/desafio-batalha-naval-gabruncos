#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); }
void limpartela() {
        system("cls"); }
void mostrartabuleiro(int tabuleiro[10][10]) {
    int linhas = 0; int colunas = 0; int i = 0; 
    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7 , 8, 9}; 
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    printf ("----------------------------------------\n");
    for (linhas = 0; linhas < 10; linhas++) {
        printf ("%c| ", letras[linhas]);
        for (colunas = 0; colunas < 10; colunas++) {
            printf ("%d   ", tabuleiro[linhas][colunas]); }
            printf ("\n"); }
            printf (" ----------------------------------------\n");
            for (i = 0; i < 10; i++) {
                printf ("   %d", numeros[i]); } } 
void coletaremovernavio(int tabuleiro[10][10]) {
    int numeronavio = 0; char letranavio; int linhaindice = 0; int colunaindice = 0; int saida = 0; int navio[3] = {3, 3, 3};
    
    while (saida == 0) {
        printf ("\n\nEscreva uma letra para mover o navio na horizontal: ");
        scanf (" %c", &letranavio);
        printf ("Escreva um numero para mover o navio na horizontal: ");
        scanf ("%d", &numeronavio);
        letranavio = toupper(letranavio);
        if (letranavio >= 'A' && letranavio <= 'J' &&
        numeronavio >= 0 && numeronavio <= 9) {
            linhaindice = letranavio - 'A';
            colunaindice = numeronavio; }
        if (tabuleiro[linhaindice][colunaindice] != 0) {
            printf ("Posição já ocupada, escolha outra. \n");
            continue; } 
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        if  (colunaindice >= 8) {
            for (int i = 0; i < 2; i++) {
            tabuleiro[linhaindice][colunaindice] = navio[i];
            colunaindice = colunaindice -1; }}
        if (colunaindice < 8) {
            for (int i = 0; i < 3; i++) {
            tabuleiro[linhaindice][colunaindice] = navio[i];
            colunaindice = colunaindice +1; }}
        limpartela();
        mostrartabuleiro(tabuleiro);
        saida = saida + 1; } int saida1 = 0; 
    while (saida1 == 0) {
        printf ("\n\nEscreva uma letra para mover o navio na vertical: ");
        scanf (" %c", &letranavio);
        printf ("Escreva um numero para mover o navio na vertical: ");
        scanf ("%d", &numeronavio);
        letranavio = toupper(letranavio);
        if (letranavio >= 'A' && letranavio <= 'J' &&
        numeronavio >= 0 && numeronavio <= 9) {
            linhaindice = letranavio - 'A';
            colunaindice = numeronavio; }
        if (tabuleiro[linhaindice][colunaindice] != 0) {
            printf ("Posicao ja ocupada, escolha outra. \n");
            continue; }
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        if  (linhaindice < 8) {
            for (int j = 0; j < 3; j++) {
            tabuleiro[linhaindice][colunaindice] = navio[j];
            linhaindice = linhaindice +1; }}
        if (linhaindice >= 8) {
            for (int c = 0; c < 3; c++) {
            tabuleiro[linhaindice][colunaindice] = navio[c];
            linhaindice = linhaindice -1; }}
        limpartela();
        mostrartabuleiro(tabuleiro);
        saida1 = saida1 + 1; } }
void coletarnaviodiagonal(int tabuleiro [10][10]) {
    int numeronavio = 0; char letranavio; int linhaindice = 0; int colunaindice = 0; int saida = 0; int navio[3] = {3, 3, 3}; 
    
    while (saida == 0) {
        printf ("\n\nEscreva uma letra para mover o navio na diagonal: ");
        scanf (" %c", &letranavio);
        printf ("Escreva um numero para mover o navio na diagonal: ");
        scanf ("%d", &numeronavio);
        letranavio = toupper(letranavio);
        if (letranavio >= 'A' && letranavio <= 'J' &&
        numeronavio >= 0 && numeronavio <= 9) {
            linhaindice = letranavio - 'A';
            colunaindice = numeronavio; }
        if (tabuleiro[linhaindice][colunaindice] != 0) {
            printf ("Posição já ocupada, escolha outra. \n");
            continue; } 
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        int contador = 1;
        switch (contador) {
            case 1: 
                if (linhaindice <= 5 && colunaindice >= 7) {
                    for (int i = 0; i < 3; i++) {
                        tabuleiro[linhaindice][colunaindice] = navio[i];
                        linhaindice = linhaindice + 1;
                        colunaindice = colunaindice - 1; }
                    break;}
                else {
                    contador++; }
            case 2:
                if  (linhaindice >= 7 && colunaindice >= 7) {
                    for (int i = 0; i < 3; i++) {
                        tabuleiro[linhaindice][colunaindice] = navio[i];
                        linhaindice = linhaindice - 1;
                        colunaindice = colunaindice - 1; }
                    break;}
                else {
                    contador++; }
            case 3:
                if  (linhaindice <= 5 && colunaindice <= 5) {
                    for (int i = 0; i < 3; i++) {
                        tabuleiro[linhaindice][colunaindice] = navio[i];
                        linhaindice = linhaindice + 1;
                        colunaindice = colunaindice + 1; }
                    break;}
                else {
                    contador++; }
            case 4:
                  if (linhaindice >= 5 && colunaindice <= 5) {
                    for (int i = 0; i < 3; i++) {
                        tabuleiro[linhaindice][colunaindice] = navio[i];
                        linhaindice = linhaindice - 1;
                        colunaindice = colunaindice + 1; }
                    break;}}
        limpartela();
        mostrartabuleiro(tabuleiro);
        saida = saida + 1; } }
void lancarcone(int tabuleiro[10][10]) {
    int numeropoder = 0; char letrapoder; int linhaindice = 0; int colunaindice = 0; int saida = 0; int cone[3][5] = {0};
    
    while (saida == 0) {
        printf ("\n\nEscreva uma letra para lancar o cone: ");
        scanf (" %c", &letrapoder);
        printf ("Escreva um numero para lancar o cone: ");
        scanf ("%d", &numeropoder);
        letrapoder = toupper(letrapoder);
        if (letrapoder >= 'A' && letrapoder <= 'J' &&
        numeropoder >= 0 && numeropoder <= 9) {
            linhaindice = letrapoder - 'A';
            colunaindice = numeropoder; } 
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        if (tabuleiro[linhaindice][colunaindice] != 0) {
            printf ("\nVoce acertou um navio! \n"); }
        cone[0][2] = 5; int vetor1 [5] = {0, 5, 5, 5, 0}; int vetor2 [5] = {5, 5, 5, 5, 5};
        for (int v = 0; v < 5; v++) {
            cone[1][v] = vetor1[v]; }
        for (int i = 0; i < 5; i++) {
            cone[2][i] = vetor2[i]; }
        if (colunaindice > 7 || colunaindice < 2) {
            printf ("O cone nao pode ser lancado aqui, escolha outra posicao. \n");
            continue; }
        int primeiracoluna = colunaindice - 2; int segundacoluna = colunaindice - 2; int terceiracoluna = colunaindice - 2;
        for (int l = 0; l < 5; l++) {
            tabuleiro[linhaindice][primeiracoluna] = cone[0][l];
            primeiracoluna = primeiracoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int c = 0; c < 5; c++) {
            tabuleiro[linhaindice][segundacoluna] = cone[1][c];
            segundacoluna = segundacoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int k = 0; k < 5; k++) {
            tabuleiro[linhaindice][terceiracoluna] = cone[2][k];
            terceiracoluna = terceiracoluna + 1; }
        mostrartabuleiro(tabuleiro);
        saida = saida + 1; } }
void lancarcruz(int tabuleiro[10][10]) {
    int numeropoder = 0; char letrapoder; int linhaindice = 0; int colunaindice = 0; int saida = 0; int cruz[3][5] = {0};
    
    while (saida == 0) {
        printf ("\n\nEscreva uma letra para lancar a cruz: ");
        scanf (" %c", &letrapoder);
        printf ("Escreva um numero para lancar a cruz: ");
        scanf ("%d", &numeropoder);
        letrapoder = toupper(letrapoder); 
        if (letrapoder >= 'A' && letrapoder <= 'J' &&
        numeropoder >= 0 && numeropoder <= 9) {
            linhaindice = letrapoder - 'A';
            colunaindice = numeropoder; } 
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        if (tabuleiro[linhaindice][colunaindice] == 3) {
            printf ("\nVoce acertou um navio! \n"); }
        cruz[0][2] = 5; int vetor1 [5] = {5, 5, 5, 5, 5}; cruz[2][2] = 5;
        for (int v = 0; v < 5; v++) {
            cruz[1][v] = vetor1[v]; }
        if (colunaindice > 7 || colunaindice < 2) {
            printf ("A cruz nao pode ser lancado aqui, escolha outra posicao. \n");
            continue; }
        int primeiracoluna = colunaindice - 2; int segundacoluna = colunaindice - 2; int terceiracoluna = colunaindice - 2;
        for (int l = 0; l < 5; l++) {
            tabuleiro[linhaindice][primeiracoluna] = cruz[0][l];
            primeiracoluna = primeiracoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int c = 0; c < 5; c++) {
            tabuleiro[linhaindice][segundacoluna] = cruz[1][c];
            segundacoluna = segundacoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int k = 0; k < 5; k++) {
            tabuleiro[linhaindice][terceiracoluna] = cruz[2][k];
            terceiracoluna = terceiracoluna + 1; }
        mostrartabuleiro(tabuleiro);
        saida = saida + 1; } }
void lancaroctaedro(int tabuleiro[10][10]) {
    int numeropoder = 0; char letrapoder; int linhaindice = 0; int colunaindice = 0; int saida = 0; int octaedro[3][3] = {0};
    
    while (saida == 0) {
        printf ("\n\nEscreva uma letra para lancar a octaedro: ");
        scanf (" %c", &letrapoder);
        printf ("Escreva um numero para lancar a octaedro: ");
        scanf ("%d", &numeropoder);
        letrapoder = toupper(letrapoder);
        if (letrapoder >= 'A' && letrapoder <= 'J' &&
        numeropoder >= 0 && numeropoder <= 9) {
            linhaindice = letrapoder - 'A';
            colunaindice = numeropoder; } 
        if (linhaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; } 
        if (colunaindice > 10) {
            printf ("As coordenadas que você entregou ultrapassam o limite do tabuleiro.\n");
            continue; }
        if (tabuleiro[linhaindice][colunaindice] == 3) {
            printf ("\nVoce acertou um navio! \n"); }
        octaedro[0][1] = 5; int vetor1 [3] = {5, 5, 5,}; octaedro[2][1] = 5;
        for (int v = 0; v < 3; v++) {
            octaedro[1][v] = vetor1[v]; }
        if (colunaindice > 8 || colunaindice < 1) {
            printf ("O octaedro nao pode ser lancado aqui, escolha outra posicao. \n");
            continue; }
        int primeiracoluna = colunaindice - 1; int segundacoluna = colunaindice - 1; int terceiracoluna = colunaindice - 1;
        for (int l = 0; l < 3; l++) {
            tabuleiro[linhaindice][primeiracoluna] = octaedro[0][l];
            primeiracoluna = primeiracoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int c = 0; c < 3; c++) {
            tabuleiro[linhaindice][segundacoluna] = octaedro[1][c];
            segundacoluna = segundacoluna + 1; }
        linhaindice = linhaindice + 1;
        for (int k = 0; k < 3; k++) {
            tabuleiro[linhaindice][terceiracoluna] = octaedro[2][k];
            terceiracoluna = terceiracoluna + 1; }
        mostrartabuleiro(tabuleiro);
        saida = saida + 1; } }
int main() {
    int tabuleiro[10][10] = {0};  int contador = 0;
    printf ("------ BEM VINDO A BATALHA NAVAL ------  \n \n"); 
    mostrartabuleiro(tabuleiro);
    coletaremovernavio(tabuleiro); coletaremovernavio(tabuleiro);
    coletarnaviodiagonal(tabuleiro); coletarnaviodiagonal(tabuleiro);
    while (contador == 0) {
        int escolha = 0;
        printf ("\n\nEscolha um poder para lancar: \n");
        printf ("1 - Cone \n");
        printf ("2 - Cruz \n");
        printf ("3 - Octaedro \n");
        printf ("Digite sua escolha: ");
        scanf ("%d", &escolha);
        switch (escolha) {
            case 1:
                lancarcone(tabuleiro);
                contador = contador + 1;
                break;
            case 2:
                lancarcruz(tabuleiro);
                contador = contador + 1;
                break;
            case 3:
                lancaroctaedro(tabuleiro);
                contador = contador + 1;
                break;
            default:
                printf ("Escolha invalida. Tente novamente.\n"); } }
    printf ("\n\nObrigado por jogar!\n");
    return 0; } 

    /*
   　　ノヽ
　 　（＿　 ）
　 （＿　　　 ）
 （＿＿＿＿＿＿ ）
  　ヽ(´･ω･)ﾉ
   　 |　 /
　  　 U U
    */