#include <stdio.h>
#include <stdlib.h>
struct SLL
{
    int data;
    struct SLL *next;
};
struct SLL *front,*rear;
void enqueue(int element)
{
    struct SLL *temp1, *temp2;
    temp1 = (struct SLL *)malloc(sizeof(struct SLL));
    temp1->data = element;
    //copying front of queue into another node
    temp2 = front;

    if(front == NULL)
    {
        //if queue is empty, we create front.
        front = temp1;
        front -> next = NULL;
    }
    else
    {
        //to navigate to the end of list
        while(temp2->next != NULL)
            temp2 = temp2->next;

        //add an element at the rear
        temp1 -> next = NULL;
        temp2 ->next = temp1;
    }
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
            front = rear = NULL;
            free(temp);
            
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
int main()
{
    int choice,element;
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
        printf("Choice? \n");
        printf(">");
        scanf("%d",&choice);
        
        switch(choice)
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
            case 3: 
                printf("Bye Bye!\n");
                break;
            default:
                printf("Enter valid choices only.\n");
                break;
        }
    } while (choice!=3); 
    return 0;
}
