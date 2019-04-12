#include "board.h"

int main()
{
    char board[9][9];
    create_board(board);
    print_board(board);
    return 0;
}