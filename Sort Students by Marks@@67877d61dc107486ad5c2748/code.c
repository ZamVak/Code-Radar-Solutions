#include <stdio.h>

struct students{
    int roll;
    char name[50];
    float marks;
};

int main(){
    int N;
    scanf("%d",&N);

    struct students arr[N];

    for(int i=0;i<N;i++){
        scanf("%d %s %f",&arr[i].roll,&arr[i].name,&arr[i].marks);
    }

    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j].marks<arr[j+1].marks){
                int troll=arr[j].roll;
                char tname[50]=arr[j].name;
                float tmarks=arr[j].marks;

                arr[j].roll=arr[j+1].roll;
                arr[j].name=arr[j+1].name;
                arr[j].marks=arr[j+1].marks;

                arr[j+1].roll=troll;
                arr[j+1].name=tname;
                arr[j+1].marks=tmarks;
                
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",&arr[i].roll,&arr[i].name,&arr[i].marks);
    }
    return 0;
}