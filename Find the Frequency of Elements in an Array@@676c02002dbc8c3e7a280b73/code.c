// Your code here...
#include <stdio.h>
int print_frequnecy(int n,int arr[]){
   
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
   }
    int current=arr[0];
    printf("%d ",current);
    int count=0;
   for (int i=0;i<n-1;i++){
    if(arr[i+1]==current)
        count++;
    else{
        printf("%d %d\n",current,count);
        count=1;
        current=arr[i+1];
    }
   }
   if(arr[n-1]!=arr[n-2]){
    printf("%d 1",arr[n-1]);
   }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    print_frequnecy(n,arr);
}