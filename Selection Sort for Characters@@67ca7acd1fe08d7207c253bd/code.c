void selectionSort(char arr[], int n){
    for(int i = 0; i <n-1; i++){
        int minIndex = i;
        for(char j ='a'+i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}
void printArray(char arr[], int n){
    for(int i = 0; i<n;i++){
        printf("%c", arr[i]);
    }
}