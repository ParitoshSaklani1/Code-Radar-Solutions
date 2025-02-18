# include <stdio.h>
int main(){
    int num , count;
    scanf("%d",&num);

    for (int i = 1; i <= num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("Prime");
    }
    else if(num == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
        }
}