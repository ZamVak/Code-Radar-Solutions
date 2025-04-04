// Your code here...
#include <stdio.h>
void rotateArray(int *arr,int k){
    printf("%d",arr[0]);
}

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    rotateArray(arr,k);

}