#include<stdio.h>

int main (){
int r;
printf("Enter The no of rows : ");
scanf("%d",&r);

int c;
printf("Enter The no of column : ");
scanf("%d",&c);

for(int i = 1;i<=r;i++){
    for(int i = 1;i<=c;i++){
        printf("%d",i);
    }
    printf("\n");
}

    return 0;
}