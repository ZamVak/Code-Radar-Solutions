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
    int minIndex=0;

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber, &students[i].name ,&students[i].marks);
        if(i>=1){
            if(students[i].marks<students[minIndex].marks)
                minIndex=i;
        } 
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",students[minIndex].rollNumber, students[minIndex].name, students[minIndex].marks);

    return 0;
}