#include<stdio.h>
int main(void){

    int A;
    scanf("%d", &A);
    for(int i=0; i<A; i++){
        int B;
        scanf("%d", &B);
        printf("%d ", B*10);
    }
    printf("\n");
    return 0;
}