// Your code here...
#include <stdio.h>
int print_frequnecy(int n,int arr[]){
   
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }

    // for(int i=0;i<n;i++)
    //     printf("%d ",arr[i]);
    // printf("\n");


    int current=arr[0];
    int count=1;
    int allsame=1;
   for (int i=0;i<n-1;i++){
    if(arr[i+1]==current)
        count++;
    else{
        allsame=0;
        printf("%d %d\n",current,count);
        count=1;
        current=arr[i+1];
    }
   }
   if(allsame && n!=1)
    printf("%d %d\n",current,count);
   if(arr[n-1]!=arr[n-2]){
    printf("%d 1",arr[n-1]);
   }
}

int main(){
    int n;
    scanf("%d",&n)
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    print_frequnecy(n,arr);
}