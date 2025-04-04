// Your code here...
#include <stdio.h>
int print_frequnecy(int n,int arr[]){
   printf("%d",arr[n-1]);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    print_frequnecy(n,arr);
}