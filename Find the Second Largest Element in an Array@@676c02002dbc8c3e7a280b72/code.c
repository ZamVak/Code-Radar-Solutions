// Your code here...
#include <stdio.h>
int secondMax(int n,int arr[]){
    int max,secMax;
    if(arr[0]>=arr[1]){
        max=arr[0];
        secMax=arr[1];
    }
    else{
        max=arr[1];
        secMax=arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>=max){
            int temp = max;
            max=arr[i];
            secMax=temp;
        }
        else if(arr[i]>=secMax)
            secMax=arr[i];
        else{}
    }
    return secMax;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d",secondMax(n,arr));
}