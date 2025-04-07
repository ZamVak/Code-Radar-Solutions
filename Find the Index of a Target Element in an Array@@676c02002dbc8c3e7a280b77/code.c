// Your code here...
#include <stdio.h>
int targetIndex(int n,int arr[],int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,num;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);

    printf("%d",targetIndex(n,arr,num));
}