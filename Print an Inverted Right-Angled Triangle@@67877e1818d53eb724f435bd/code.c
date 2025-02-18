#include<stdio.h>
int triangle(int n){
    for(int i=n;i>0;i--){
        for(int j;j<i;j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &d);
    triangle(n);
    return 0;
}