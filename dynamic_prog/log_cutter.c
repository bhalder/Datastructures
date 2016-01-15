#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

#define MAX 200
#define M( x, y ) ( (x) > (y) > (x) : (y) )

int BEST[MAX];

int size[MAX] = {1, 2, 3, 5, 6, 9};
int price[MAX] = { 3, 5, 6, 9, 2, 10 };

int get_max_cut( int cut ) {
    int max_index = 0;
    int max_value = 0; 
    int i = 0;

    for( i = 0 ; i < cut; i++ ) {
        if( max_value < (BEST[ cut - i ] + price[ i ] ) ) {
            max_value = (BEST[ cut - i ] + price[ i ] );
            max_index = i;
        }
    }

    BEST[cut] = max_value;
    return max_index;
}

int get_max_cut_value ( int length ) {

    int value = 0;
    int i = 0;

    for( i = 0 ; i < length; i++ ) {
        get_max_cut( i ) ;     
    }

    return BEST[length-1];
}

int main() {

    int i = 0;
    for( i = 0; i < MAX; i++ ) {
        BEST[i] = 0;
    }

    start = clock();
    int max_value =  get_max_cut_value(18);
    end = clock();

    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC; 
    printf( "\nResult is %d\nTime taken is %f\n", max_value, cpu_time_used );
    return 0;
}
