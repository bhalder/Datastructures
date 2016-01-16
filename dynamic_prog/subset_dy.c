#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

int sub_set[20];
void subset( int * set,  int index, int subset_length, int length) {
    int i = 0;
    int j = 0;

    if( index >= length) {
        return;
    }

    for( j = index+1; j<length; j++ ) {
        printf("\n");
        for( i = 0; i < subset_length ; i++ ) {
            printf(" %d", sub_set[i]);
        }
        printf(" %d", set[j]);
    }

    for( j = index+1; index<length; j++ ) {
        if( j >= length) break;
        sub_set[subset_length] = set[j];
        subset( set, j, subset_length+1, length); 
    }
    return;
}

void get_subset( int * set, int length) {
    int i = 0;

    for( ; i < length; i++ ) {
        sub_set[0] = set[i];
        printf("\n %d", set[i]);
        subset( set, i, 1, length);
    }
}

int main(int argc, char*argv[]) {
    int number = atoi(argv[1]);

    int * set = (int *) malloc( (sizeof(int)) * number);
    int i = 0;
    for( i = 0; i < number; i++ ) {
        set[i] = i+1;
    }
    
    start = clock();
    get_subset( set, number );
    end = clock();

    cpu_time_used = ( ( double ) ( end - start ) ) / CLOCKS_PER_SEC;
    printf( "\nTime taken is %f\n", cpu_time_used );

    return 0;
}
