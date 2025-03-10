#include <stdio.h>

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);

    struct Student students[n];

    for(int i=1;i<=n;i++){
        scanf("%d %s %f",&students[i].rollNumber, &students[i].name ,&students[i].marks);
    }

    for(int i=1;i<=n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %f",&students[i].rollNumber, &students[i].name, &students[i].marks);
    }
}