#include <stdio.h>

#define MAX( x, y ) ((x)>(y)?(x):(y))

int main() {

    int input[] = { 0, -1, 2, 4, 8, -10, 3, 6 };
    int i = 0;
    int max = 0;
    for( i = 0; i < 8; i++ ) {
        max = MAX( max + input[i], input[i] );
    }

    printf("\nMAX is - %d\n", max );
}
