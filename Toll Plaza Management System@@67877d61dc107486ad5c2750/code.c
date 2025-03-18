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
        scanf("%s %s %f",&arr[i].number,&arr[i].type,&arr[i].toll);
        if(strcmp(arr[i].type,"Car")==0)
            car+=arr[i].toll;
        else if(strcmp(arr[i].type,"Truck")==0)
            truck+=arr[i].toll;
        else
            bike+=arr[i].toll;
    }

        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car,truck,bike);
    return 0;
}