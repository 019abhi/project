#include<stdio.h>

typedef struct{
    int roll_no;
    char name[30];//30 character + 1 null terminator
    float marks[3];


} Student;

int main(){
    Student students[10];
    int i,j;
    float sum,average;

    //reading data for 3 students
    for(i=0; i < 3; i++){
        printf("enter details for student %d :\n",  i + 1);
        printf("enter roll_no: ");
        scanf("%d", &students[i].roll_no);
        printf("enter name:");
        scanf("%s" ,&students[i].name);
        for(j = 0; j < 3; j++){
            printf("enter marks in subject %d", j+1);
            scanf("%f" , &students[i].marks[j]);

        }

    }
// calculating and displaying average marks
for(i = 0; i < 3; i++){
    sum = 0;
    for(j =0; j< 3; j++){
        sum += students[i].marks[j];
    }
    average=sum/3;
    printf("\nstudent %d (%s) - average marks:%.2f\n",students[i].roll_no,students[i].name,average);
}
}
