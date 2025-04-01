int fibonacciSeries(int n){
    int a,b,next;
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