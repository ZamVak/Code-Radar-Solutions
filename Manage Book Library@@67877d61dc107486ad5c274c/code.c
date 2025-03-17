#include <stdio.h>
#include <string.h>

struct Book{
    char title[100];
    char author[50];
    float price;
};

int main(){
    int N;
    scanf("%d",&N);

    struct Book arr[N];

    for(int i=0;i<N;i++){
        fgets(arr[i].title,100,stdin);
        fgets(arr[i].author,50,stdin);
        scanf("%f",&arr[i].price);
    }

    float thresh;
    scanf("%f",&thresh);
    printf("Books above price %.2f\n",thresh);
    for(int i=0;i<N;i++){
        if(arr[i].price>thresh)
        printf("Title: %s,Author: %s, Price: %.2f\n",arr[i].title,arr[i].author,arr[i].price);
    }
    return 0;
}