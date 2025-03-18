#include <stdio.h>
#include <string.h>

struct Vehicle{
    char number[10];
    char type[50];
    float toll;
};

int main(){
    int N;
    scanf("%d",&N);
    float car=0,truck=0,bike=0;
    struct Vehicle arr[N];

    for(int i=0;i<N;i++){
        scanf("%s %s %d",&arr[i].number,&arr[i].type,&arr[i].toll);

        if(arr[i].type=="Car")
            car+=arr[i].toll;
        else if(arr[i].type=="Truck")
            truck+=arr[i].toll;
        else
            bike+=arr[i].toll;
    }

        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car,truck,bike);
    return 0;
}