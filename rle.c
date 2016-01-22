#include <stdio.h>
#include <string.h>

int main() {

    char * input = "aaaabbbbccccdddee";
    int length = strlen(input);
    int ch[length];
    char alph[length];
    int curr_ch_i = 0;
    char curr_ch;
    int index_count = 1;
    char final_string[length];
    char temp[100];
    strcpy(final_string, "");

    int i;
    ch[0] = 1;
    curr_ch = input[0];
    alph[0] = curr_ch;

    for( i = 1; i < length ; i++ ) {
        if( input[i] == curr_ch ) {
            ch[curr_ch_i]++;
        } else {
            curr_ch_i++;
            ch[curr_ch_i] = 1;
            alph[curr_ch_i] = input[ i ];
            curr_ch = input[i];
            index_count++;
        }
    }
    printf("\nInput is %s \n", input);
    for( i = 0; i < index_count; i++ ) {
        sprintf(temp,"%c%d", alph[i], ch[i]);
        strcat(final_string, temp);
    } 
    printf("\n");
    printf("In String format %s\n", final_string);
}
