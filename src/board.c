#include "board.h"
#include <stdio.h>

void create_board(char arr[][9])
{
    for (int i = 2; i < 6; i++) {
        for (int j = 1; j < 9; j++) {
            arr[i][j] = ' ';
        }
    }
    arr[0][1] = 'r';
    arr[0][2] = 'n';
    arr[0][3] = 'b';
    arr[0][4] = 'q';
    arr[0][5] = 'k';
    arr[0][6] = 'b';
    arr[0][7] = 'n';
    arr[0][8] = 'r';

    arr[0][0] = '8';
    arr[1][0] = '7';
    arr[2][0] = '6';
    arr[3][0] = '5';
    arr[4][0] = '4';
    arr[5][0] = '3';
    arr[6][0] = '2';
    arr[7][0] = '1';

    arr[8][1] = 'a';
    arr[8][2] = 'b';
    arr[8][3] = 'c';
    arr[8][4] = 'd';
    arr[8][5] = 'e';
    arr[8][6] = 'f';
    arr[8][7] = 'g';
    arr[8][8] = 'h';

    arr[7][1] = 'R';
    arr[7][2] = 'N';
    arr[7][3] = 'B';
    arr[7][4] = 'Q';
    arr[7][5] = 'K';
    arr[7][6] = 'B';
    arr[7][7] = 'N';
    arr[7][8] = 'R';

    for (int i = 1; i < 9; i++) {
        arr[1][i] = 'p';
        arr[6][i] = 'P';
    }
}

void print_board(char arr[][9])
{
    for (int i = 0; i <= 8; i++) {
        for (int j = 0; j <= 8; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }
}