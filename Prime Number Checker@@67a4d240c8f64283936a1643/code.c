#include<stdio.h>
int isPrime(int a){
    scanf("%d", &a);
    if(a%2==0){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
