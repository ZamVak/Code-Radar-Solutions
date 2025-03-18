#include <stdio.h>
#include <string.h>

struct Employee{
    int id;
    char name[50];
    float salary;
    float bonus;
};

int main(){
    int N;
    scanf("%d",&N);

    struct Employee arr[N];

    for(int i=0;i<N;i++){
        scanf("%d %s %f",&arr[i].id,&arr[i].name,&arr[i].salary);

        if(arr[i].salary<50000)
            arr[i].bonus=0.1*arr[i].salary;
        else
            arr[i].bonus=0.05*arr[i].salary;
    }

    for(int i=0;i<N;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,arr[i].bonus);
    }
    return 0;
}