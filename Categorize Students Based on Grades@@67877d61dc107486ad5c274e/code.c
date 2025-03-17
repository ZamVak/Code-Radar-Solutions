#include <stdio.h>
#include <string.h>

struct students{
    int roll;
    char name[50];
    float marks;
    char grade;
};

int main(){
    int N;
    scanf("%d",&N);

    struct students arr[N];

    for(int i=0;i<N;i++){
        scanf("%d %s %f",&arr[i].roll,&arr[i].name,&arr[i].marks);

        if(arr[i].marks>=85)
            arr[i].grade='A';
        else if(arr[i].marks>=70)
            arr[i].grade='B';
        else
            arr[i].grade='C';
    }

    for(int i=0;i<N;i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n",arr[i].roll,arr[i].name,arr[i].grade);
    }
    return 0;
}