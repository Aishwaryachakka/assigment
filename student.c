#include<stdio.h>
struct student
{
    char name[50];
    int age;
    float total_marks;
};
int main()
{
    struct student s[2];
    float avg;
    for(int i = 0; i < 2;i++)
    {
        printf("Enter name of student %d:\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter age of student %d:\n", i+1);
        scanf("%d", &s[i].age);
        printf("Enter total marks of student %d:\n", i+1);
        scanf("%f", &s[i].total_marks);
    }
    avg = (s[0].total_marks + s[1].total_marks)/2;
    printf("\nStudent Details:\n");
    for(int i = 0; i < 2; i++)
    {
         printf("Name: %s  Age: %d  Marks: %.2f\n",
        s[i].name, s[i].age, s[i].total_marks);
    }
    printf("\nAverage Total Marks = %.2f", avg);
    return 0;
}