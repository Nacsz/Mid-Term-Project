#include <stdio.h>

int main(void){
    char buffer[5] = "Great";                 

    int id_seq[3];

    id_seq[-1] = 123;
    id_seq[1] = 234;
    id_seq[2] = 345;
    id_seq[3] = 456;
    id_seq[4] = 567;

    printf("id_seq[4]= %d\n", id_seq[4]);

    for(int i = 0 ; i < 5; i++){
        printf("%c", buffer[i]);
    }
    printf("\n");

}