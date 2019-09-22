//6. Print this pattern
// 1  2 3  4
//12 13 14 5
//11 16 15 6
//10 9  8  7

#include <stdio.h>

#define SIZE 4

int main()
{
    int i, j, N;
    int board[SIZE][SIZE];
    int left, top;

    left = 0;
    top  = SIZE - 1;
    N    = 1;

    for(i=1; i<=SIZE/2; i++, left++, top--)
    {

        for(j=left; j<=top; j++, N++)
        {
            board[left][j] = N;
        }


        for(j=left+1; j<=top; j++, N++)
        {
            board[j][top] = N;
        }


        for(j=top-1; j>=left; j--, N++)
        {
            board[top][j] = N;
        }


        for(j=top-1; j>=left+1; j--, N++)
        {
            board[j][left] = N;
        }
    }


    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%-5d", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
