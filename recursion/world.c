#include<stdio.h>

void printhello(int n){
    if(n == 0){
        return;
    }
    printf("Hello\n");
    printhello(n-1);

}

int main () {

    int n;
    printf("Enter THe Value of N : ");
    scanf("%d",&n);

    printhello(n);


    return 0;
}