// Your code here...
#include <stdio.h>
int firstPeak(int n,int arr[]){
   for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        return arr[i];
   }
   return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

   printf("%d",firstPeak(n,arr));
}