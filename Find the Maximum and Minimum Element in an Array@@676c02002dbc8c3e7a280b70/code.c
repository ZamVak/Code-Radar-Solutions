// Your code here...
#include <stdio.h>
void max_min(int n,int arr[],int *max,int *min){
    *max =arr[0];
    *min =arr[0];
   for(int i=1;i<n;i++){
    if(arr[i]>*max)
        *max=arr[i];
    if(arr[i]<*min)
        *min = arr[i];
   }
}

int main(){
    int n,max,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max_min(n,arr,&max,&min);
    printf("%d %d",min,max);
}