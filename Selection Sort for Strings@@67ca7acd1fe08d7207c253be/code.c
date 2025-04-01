void selectionSort(char arr[][100], int n){
    for(int i = 0; i<n-1 ;i++){
        int minINdex= i;
        for(int j=i+1; j<n;j++){
            if(strcmp(arr[j], arr[minINdex] )< 0){
                minINdex =j;
            }
            strcpy(char temp, arr[minINdex]);
            strcmp(arr[minINdex], arr[i]);
            strcmp(arr[i], temp)
        }
    }
}
void printArray(char arr[][100], int n){
    for(int i = 0; i < n; i++){
        printf("%s"\n, arr[i]);
    }
}