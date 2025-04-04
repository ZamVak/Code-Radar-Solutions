// Your code here...
#include <stdio.h>
int print_frequnecy(int n,int arr[]){
   
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i){
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
   for (int i=0;i<n;i++){
    if(arr[i]==current)
        c++;
    else{
        
    }
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