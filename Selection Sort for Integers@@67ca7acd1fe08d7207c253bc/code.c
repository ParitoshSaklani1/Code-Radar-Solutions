void selectionSort(int arr[], int n){
    for(int i =0; i<n;i++){
        int minIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<minIndex){
                int temp = minIndex;
                minIndex = arr[i];
                temp = arr[i];
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
}