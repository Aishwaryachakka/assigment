#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    int n;
    struct Employee *emp;
    printf("Enter number of employees:\n");
    scanf("%d", &n);
    emp = (struct Employee *)malloc(n * sizeof(struct Employee));
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i+1);
        printf("Enter ID:\n");
        scanf("%d", &emp[i].id);
        printf("Enter Name:\n");
        scanf("%s", emp[i].name);
        printf("Enter Salary:\n");
        scanf("%f", &emp[i].salary);
    }
     printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++)
    {
        printf("ID: %d  Name: %s  Salary: %.2f\n",
             emp[i].id, emp[i].name, emp[i].salary);
    }
    free(emp);
    return 0;
}