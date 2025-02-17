#include<stdio.h>
int isPrime(int num){
    if (num<=1) return 0;
    for(int i=2,i<=num/2,i++){
        if(num%2==0)return 0;
    }return 1;
}
int main(){
    int a;
    scanf("%d", &a);
    if isPrime(a){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}