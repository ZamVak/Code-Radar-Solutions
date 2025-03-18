#include <stdio.h>
#include <string.h>

struct Day{
    char day[50];
    float temp;
};

int main(){
    struct Day arr[7];
    float avg=0;
    for(int i=0;i<7;i++){
        fgets(arr[i].day,50,stdin);
        scanf("%f",&arr[i].temp);
        printf("%f",arr[i].temp);
        avg+=arr[i].temp;
        printf("%f",avg);
    }
    avg/=7;
    printf("Average Temperature: %.2f",&avg);
    return 0;
}