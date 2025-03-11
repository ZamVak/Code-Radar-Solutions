#include <stdio.h>

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    int rollNum;
    bool notfound=true;
    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber, &students[i].name ,&students[i].marks);
    }
    scanf("%d",&rollNum);

    for(int i=0;i<n;i++){
        if(students[i].rollNumber==rollNum){
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollNumber, students[i].name, students[i].marks);
            notfound=false;
            break;
        }
    }
    if(notfound){
        printf("Student not found");
    }
    return 0;
}