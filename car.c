#include <stdio.h>
struct Car
{
    int car_id;
    char model[30];
    float rent_per_day;
};
int main()
{
    struct Car c[3];
    int days;
    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details of car %d\n", i+1);
        printf("Enter Car ID:\n");
        scanf("%d", &c[i].car_id);
        printf("Enter Model:\n");
        scanf("%s", c[i].model);
        printf("Enter Rent per day:\n");
        scanf("%f", &c[i].rent_per_day);
    }
    printf("\nEnter number of days:\n");
    scanf("%d", &days);
    printf("\nRental Details:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Car ID: %d  Model: %s  Total Rent: %.2f\n",
        c[i].car_id, c[i].model, c[i].rent_per_day * days);
    }
    return 0;
}