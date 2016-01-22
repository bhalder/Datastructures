#include <stdio.h>

#define MAX 100

int get_combination( int orig[MAX], int orig_max, int curr[MAX], int cur_size,  int last_index ) {
    int i = 0;
"

    if( curr == NULL ) {
        curr = (int *) malloc ( orig_max * (sizeof( int ) ) );
    }

    if( cur_size  > 0) {

        printf("\n");
    }
    for( i = 0; i < cur_size; i++ ) {
        printf("%d ", curr[i]);
    }
    cur_size++;
    for( i = last_index+1; i < orig_max; i++ ) {
        curr[cur_size] = orig[ i ];
        get_combination(  orig, orig_max, curr, cur_size, i);    
    }
}

int main() {

    int orig[] = {1, 2, 3, 4};
    int i = 0;
    for( i = 0; i < 4; i++ ) {
        get_combination( orig, 4, NULL, -1, i);
    }
}
