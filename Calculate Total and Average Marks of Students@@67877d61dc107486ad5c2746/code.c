#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    float marks=0;
    struct student students[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[].rollNumber,&students[].name,&students[].marks);
    }
    for(int i=0;i<n;i++){
        marks=marks+students[i].marks;
        
}

printf("Total Marks: %.2f\n",marks);
printf("Average Marks: %.2f",marks/n);
}