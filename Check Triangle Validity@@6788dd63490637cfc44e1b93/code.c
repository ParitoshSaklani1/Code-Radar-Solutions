#include<stdio.h>
int main(){
    int main a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b > c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}