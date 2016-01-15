#include <stdio.h>
#include <time.h>

#define MAX 100
int store[ MAX ];

clock_t start, end;
double cpu_time_used;

int stairs( int left ) {
    if( left < 0 ) {
        return 0;
    } 

    if( left == 0 ) {
        store[left] = 1;
        return store[left];
    }

    if( store[ left ] == 0) {
        store[left] = stairs( left-1 ) + stairs( left-2 );
    } 

    return store[left];
}

int main() {
    int i = 0;
    for( i = 0; i < MAX; i++ ) {
        store[i] = 0;
    }
    start = clock();
    int total_ways =  stairs(20);
    end = clock();

    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC; 
    printf( "\nResult is %d\nTime taken is %f\n", total_ways, cpu_time_used );
    return 0;
}
