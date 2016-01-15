#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

int stairs( int left ) {
    if( left < 0 ) {
        return 0;
    } 

    if( left == 0 ) {
        return 1;
    }

    return stairs( left-1 ) + stairs( left-2 );
}

int main() {
    start = clock();
    int total_ways =  stairs(20);
    end = clock();

    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC; 
    printf( "\nResult is %d\nTime taken is %f\n", total_ways, cpu_time_used );
    return 0;
}
