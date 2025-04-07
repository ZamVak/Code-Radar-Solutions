// Your code here...
#include <stdio.h>
int isPalindromeArray(int n,int arr[]){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i])
            return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(isPalindromeArray(n,arr)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}