int fibonacciSeries(int n){
    int a=0,b=1,next;
    if(n<=0){
        printf("Error");
    }
    for(int i=1; i<=n;i++){
        printf("%d ", a);
        next =a+b;
        a =b;
        b = next;
    }
}