#include<stdio.h>
#define SIZE 5
int queue[SIZE],front = -1, rear  = -1;
void enQueue(int value)
{
    if(rear >= SIZE - 1)
    printf("\nQueue is full!!! Insertion is not possible!!!");
    else
    {
        if(front == -1)
        front = 0;
        rear++;
        queue[rear] = value;
        printf("\nInsertion success!!!");
    }
}
void deQueue()
{
    if(front == -1 || front > rear)
    printf("\nQueue is empty!!! Deletion is not possible!!!");
    else
    {
        printf("\nDeleted : %d", queue[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}
int main()
{
    int choice, value;
    while(1)
    {
        printf("\nLINEAR QUEUE MENU");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enQueue(value);
            break;
            case 2:
            deQueue();
            break;
            case 3:
            return 0;
            default:
            printf("Invalid choice!!!");
        }
    }
}