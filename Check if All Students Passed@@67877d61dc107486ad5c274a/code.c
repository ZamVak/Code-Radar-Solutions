#include <stdio.h>
#include <string.h>

struct students{
    int roll;
    char name[50];
    float marks;
};

int main(){
    int N;
    scanf("%d",&N);

    struct students arr[N];
    int allPassed=1;
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&arr[i].roll,&arr[i].name,&arr[i].marks);
        if(arr[i].marks<50){
            allPassed=0;
        }
    }

    if(allPassed){
        printf("All Passed");
    }
    else
        printf("Not All Passed");
    return 0;
}