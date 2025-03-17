#include <stdio.h>
#include <string.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int N;
    scanf("%d",&N);

    struct Rectangle arr[N];

    for(int i=0;i<N;i++){
        scanf("%d %d",&arr[i].length,&arr[i].breadth);
    }

    for(int i=0;i<N;i++){
        printf("Rectangle %d: Area: %.2f, Perimeter: %.2f\n",i+1,(arr[i].length)*(arr[i].breadth),2*(arr[i].length+arr[i].breadth));
    }
    return 0;
}