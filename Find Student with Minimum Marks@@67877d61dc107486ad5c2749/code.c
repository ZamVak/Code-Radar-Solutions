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
    int maxIndex=0;

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber, &students[i].name ,&students[i].marks);
        if(i>=1){
            if(students[i].marks<students[maxIndex].marks)
                maxIndex=i;
        } 
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",students[maxIndex].rollNumber, students[maxIndex].name, students[maxIndex].marks);

    return 0;
}