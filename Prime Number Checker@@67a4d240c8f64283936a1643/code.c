#include<stdio.h>
int isPrime(int a){
    int i;
    int flag =0;
    if(a == 1 || a==0)
    flag =1;
    for(i=2;i<=a/2;++i){
        if(i%2==0){
            flag =1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag ==0){
        return 1;
    }else{
        return 0;
    }
    return 0;
}
