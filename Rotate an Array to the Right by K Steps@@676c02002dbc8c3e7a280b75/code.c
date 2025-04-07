// Your code here...
#include <stdio.h>
void rotateArray(int n,int arr[],int k){
   for(int j=1;j<=k;j++){
   for(int i=1;i<n;i++){
    int temp=arr[i];
    arr[i]=arr[0];
    arr[0]=temp;
   }
   }
}

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    rotateArray(n,arr,k);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}