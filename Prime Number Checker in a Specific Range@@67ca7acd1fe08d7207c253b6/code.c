int isPrime(int a){
    if(a<=1){
        return 0;
    }
    for(int i = 2; i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a, int b){
    int found = 0;
    for(int i =a; i<=b;i++){
        if(isPrime(i)){
        printf("%d ", i);
        found = 1;
        }      
    }
    if(!found){
        printf("No prime numbers");
    }
}