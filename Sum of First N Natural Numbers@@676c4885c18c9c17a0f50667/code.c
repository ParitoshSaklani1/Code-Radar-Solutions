#include<stdio.h>
int main(){
    int n;
    int i =1;
    sum= 0;
    scanf("%d", &n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("%d", sum);
    return 0;
}