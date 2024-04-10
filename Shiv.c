#include<stdio.h>
#include<string.h>

// comparision of two user defined strings.



int main (){
    char str1[100],str2[100],str3[100];

    printf("Enter the First string : ");
    scanf("%s",str1);

       printf("Enter the Second string : ");
    scanf("%s",str2);

           strcpy(str3,strcat(str1,str2));


    printf("comapre between two strings is : %s",str3);

    return 0;
}