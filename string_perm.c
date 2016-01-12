#include <stdio.h>
#include <string.h>

void permute( char * cur_str, char * sel_str, int pos, int len) {
    if( strlen(sel_str) == 2 ) {
        char temp[len];
        strcpy(temp, cur_str);
        temp[len-2] = sel_str[0];
        temp[len-1] = sel_str[1];
        temp[len] = '\0';    
        printf("%s\n", temp);
        temp[len-2] = sel_str[1];
        temp[len-1] = sel_str[0];
        temp[len] = '\0';
        printf("%s\n", temp);        
    } else { 
        char new_cur[strlen( cur_str) + 2];
        strcpy( new_cur, cur_str );
        int i = 0;
        for( i = 0; i < strlen(sel_str); i++ ) {
            new_cur[pos] = sel_str[i];
            new_cur[pos+1] = '\0';

            char new_sel[ strlen(sel_str) ];
            int k = 0;
            int j = 0;
            for( j = 0; j < strlen( sel_str ); j++ ) {
                if( sel_str[j] == sel_str[i]) {
                    continue;
                }
                new_sel[k++] = sel_str[j];
            }
            new_sel[k] = '\0';

            permute( new_cur, new_sel, pos+1, len ); 
        }
    }
}

int main(int argc, char * argv[]) {

    permute( argv[1], argv[1], 0, strlen(argv[1]));

}
