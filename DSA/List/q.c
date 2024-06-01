// Dynamic Implementation of Queue using Linked list
#include <stdio.h>
#include <stdlib.h>

struct SLL
{
    int data;
    struct SLL *next;
};
typedef struct SLL node;
node *front,*rear;
void enqueue(int element)
{
    //Creating NewNode
    node *NewNode,*temp;
    //allocating memory for NewNode
    NewNode = (node *)malloc(sizeof(node));

    NewNode -> data = element;
    NewNode -> next = NULL;

    if(front == NULL) // if Queue is empty then, NewNode will be front as well as rear node 
    {
        front = rear = NewNode;
    }
    else //if Queue is not empty, NewNode will be added from rear.
    {
        temp = front;
        while(temp->next !=NULL)
        {
            temp = temp ->next;
        }
        temp->next = NewNode;
        rear = NewNode;
    }
}

void dequeue()
{
    node *temp;
    if(front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else if (front->next == NULL) // only one element in queue
    {
        temp = front;
        front = rear = NULL;
        printf("%d is dequeued.\n",temp->data);
        free(temp);
    }
    else //if queue contains more than one element
    {
        temp = front;  //store front to temporary
        front = front->next; // Change front to point to second node
        printf("%d is dequeued.\n",temp->data);
        free(temp); //delete front
    }
    
}
void display()
{
    node *temp;
    temp = front;
    if (front == NULL) 
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Current queue is: ");
        do
        {
            printf("%d ",temp->data);
            temp = temp->next;
        } while (temp!=NULL);
        printf("\n");
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
                display();
                break;
            case 2: 
                dequeue();
                display();
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