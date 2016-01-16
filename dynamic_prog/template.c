#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;



int main() {

    start = clock();
    end = clock();

    printf("\nYou can move in %d ways \n", res);
    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC;
    printf( "\nTime taken is %f\n", cpu_time_used );

    return 0;
}
