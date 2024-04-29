#include <stdio.h>

void main(){

    float x = 0.1;

    while(x != 1.1){          //while 조건문에 실수형 입력값을 넣게될 경우에 원하는 조건에 종료되지 않을 수 있다.

        x = x + 0.1;
        printf("x=%f\n", x);
        if(x>3) break;

    }
}