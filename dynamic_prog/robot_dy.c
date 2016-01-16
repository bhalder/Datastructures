#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

#define MAX 100

int grid[MAX][MAX];

int move( int to_x, int to_y, int fin_x, int fin_y ) {

    if( to_x == fin_x && to_y == fin_y) {
        return 1;
    } 

    if( to_x > fin_x ) {
        return 0;
    }

    if( to_y > fin_y ) {
        return 0;
    }

    return ( move (to_x + 1, to_y, fin_x, fin_y ) + move (to_x, to_y+1, fin_x, fin_y ) );
} 

int main() {

    start = clock();
    int res = move( 0,0, 1, 1);
    end = clock();

    printf("\nYou can move in %d ways \n", res);
    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC;
    printf( "\nTime taken is %f\n", cpu_time_used );

    return 0;
}
