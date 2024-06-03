#include<stdio.h>
#include<math.h>

int factorial(int x){
    int fact = 1;
    for(int i = 2;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}

int comb(int n,int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main (){
    int n;
    printf("Enter the value Of N : ");
    scanf("%d",&n);

    int r;
    printf("Enter the Value of R : ");
    scanf("%d",&r);

    printf("The Combination are : %d",comb(n,r));


    return 0;
}