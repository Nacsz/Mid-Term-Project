#include <stdio.h>

int main(void){
    int k = 1;
    int val = 0;

    while(k = 10){       // 조건문이 항상 참이기 때문에 무한루프에 빠지게된다.
        val++;
        k++;

    }

    printf("k = %d, val = %d\n", k, val);
}