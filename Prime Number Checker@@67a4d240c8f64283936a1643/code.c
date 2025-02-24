#include<stdio.h>
int isPrime(int a){
    int i;
    int flag =0;
    if(a == 1 || a==0)
    flag =1;
    for(i=2,i<=a,i++){
        if(i%2==0){
            flag =1;
            break;
        }
    }
    if(flag ==0){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
