// Your code here...
#include <stdio.h>
void rotateArray(int n,int arr[],int k){

   for(int i=1;i<n,i++){
    int temp=arr[i];
    arr[i]=arr[0];
    arr[0]=temp;
   }
   printf("%d %d",arr[0],arr[1]);
}

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    rotateArray(n,arr,k);

}