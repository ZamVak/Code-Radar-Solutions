// Your code here...
void bubbleSort(int arr[],int l){
    for(int j=0;j<l;j++){
        if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
}