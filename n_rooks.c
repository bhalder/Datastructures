#include <stdio.h>

#define MAX 10

// solution - Current Solution
// row and column where you want to place the rook
// n - Size of the board
int place( int sol_col[MAX], int row, int col, int n ) {

    int i = 0;
    // Place the rook
    for( i = 0; i < row; i++ ) {
        if( sol_col[i] == col ) {
            return 0;
        }
    }

    sol_col[ row ] = col;

    if( row == n ) {
        for( i = 0; i <= n; i++ ) {
            printf("[%d] [%d]", i, sol_col[i]);
            printf("\n");
        }
        return 1;
    }

    row++;
    for( i = 0; i <= n; i++ ) {
        if( place( sol_col, row, i, n) == 1) {
            return 1;
        } 
    }
    
    // Check if the location is safe.
    // If not safe - Return
    // else check if the current row is n
    // if yes, print the current solution    
}

int main() {
    int sol_col[MAX];
    place( sol_col, 0, 4, 7);
}
