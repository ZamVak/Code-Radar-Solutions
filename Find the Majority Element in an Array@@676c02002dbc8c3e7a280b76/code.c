// Your code here...// Your code here...
#include <stdio.h>
int majorityElem(int n,int arr[]){
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
   int i=0;
    while(i<n){
        int count=1,current=arr[i];;
        for(int j=i+1;j<n;j++){
            if(arr[j]==current)
                ++count;
            else
                i=j;
                break;
        }
        if(count > (n/2))
            return current;
    }
    
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d",majorityElem(n,arr));
}