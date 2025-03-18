#include <stdio.h>
#include <string.h>

struct Tickets{
    char name[50];
    char type[20];
    float price;
};

int main(){
    int N;
    scanf("%d",&N);
    float stan=0,prem=0,VIP=0;
    struct Vehicle arr[N];

    for(int i=0;i<N;i++){
        scanf("%s %s %f",&arr[i].name,&arr[i].type,&arr[i].price);
        if(strcmp(arr[i].type,"Standard")==0)
            stan+=arr[i].price;
        else if(strcmp(arr[i].type,"Premium")==0)
            prem+=arr[i].price;
        else
            VIP+=arr[i].price;
    }

        printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",stan,prem,VIP);
    return 0;
}