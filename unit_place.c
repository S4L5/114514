#include<stdio.h>

int main(){

    printf("輸入一個整數:" );
    int a;

    scanf("%d", &a);

    printf("此整數的個位數是%d\n", a%10);

}
