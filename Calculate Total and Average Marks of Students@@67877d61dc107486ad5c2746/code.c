
#include <stdio.h>

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    float sum=0;
    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber, &students[i].name ,&students[i].marks);
        sum+=students[i].marks;
    }
    printf("Total Marks: %.2f\nAverage Marks: %.2f",sum,sum/n);

    return 0;
}