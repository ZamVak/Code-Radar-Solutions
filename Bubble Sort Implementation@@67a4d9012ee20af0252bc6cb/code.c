// Your code here...
void bubbleSort(int arr[],int l){
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-1-i;j++){
            if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}