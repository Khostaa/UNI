#include <stdio.h>
#include <stdlib.h>
struct SLL
{
    int data;
    struct SLL *next;
};
struct SLL *front,*last;
void enqueue(int);
int dequeue();
int main()
{
    int choice,element;
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
        printf("Choice? \n");
        scanf("%d",&choice);
        printf(">");
        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2: 
            element = dequeue();
            printf("%d is Dequeued.\n",element);
            break;
        
        default:
            printf("Enter 1,2 or 3 only.\n");
            break;
        }
    } while (choice!=3); 
    return 0;
}
void enqueue(int element)
{
    struct SLL *NewNode;
    NewNode = (struct SLL*)malloc(sizeof(struct SLL));
    if(NewNode == NULL)
    {
        printf("Memory Allocation failed.\n");
    }
    else
    {
        last -> data = element;
        last -> next = NULL;
        if (last == NULL)
        {
            
        }

    }
    printf("Success. %d is Enqueued.\n",element);
}
int dequeue()
{
    struct SLL *temp;
    int element;
    if (front == NULL)
    {
        printf("Queue Underflown.\n");
        return -1;
    }
    else
    {
        element = front->data;
        // case 1 when there is single element
        if(front -> next == NULL)
        {
            temp = front;
            free(temp);
            front = last = NULL;
        }
        else //case 2 when there are more than one element
        {
            temp = front;
            front = front->next;
            free(temp);
        }
        return element;
    }
}

