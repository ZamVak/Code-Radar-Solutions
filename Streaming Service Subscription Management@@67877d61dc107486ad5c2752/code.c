#include <stdio.h>
#include <string.h>

struct Subscription{
    char name[50];
    char type[20];
    float price;
};

int main(){
    int N;
    scanf("%d",&N);
    float stan=0,prem=0,basic=0;
    int sc=0,pc=0,bc=0;
    struct Subscription arr[N];

    for(int i=0;i<N;i++){
        scanf("%s %s %f",&arr[i].name,&arr[i].type,&arr[i].price);
        if(strcmp(arr[i].type,"Standard")==0)
            {stan+=arr[i].price;++sc;}
        else if(strcmp(arr[i].type,"Premium")==0)
            {prem+=arr[i].price;++pc;}
        else
            {basic+=arr[i].price;++bc;}
    }

        printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",bc,basic,sc,stan,pc,prem);
    return 0;
}