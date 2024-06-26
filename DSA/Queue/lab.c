//Static Implementation of linear queue
#include <stdio.h>
#define max 10
#define true 1
#define false 0
 
struct queue{
    int f;
    int r;
    int data[max];
};
int isFull(struct queue *q)
{
    //check if queue is full? rear = max -1 for full queue.
  return q->r==max-1?true:false;
}
int isEmpty(struct queue *q)
{
    //check if queue is empty?  rear < front for queue to be empty
    return q->r<q->f?true:false;
}
void enqueue(struct queue *q,int element)
{   
    //adding element in queue by increasing rear, as rear increases, queue enlongates
    q->data[++q->r]= element;
}
int dequeue(struct queue *q)
{
    //removing element for queue. as in Queue its FIFO
    int ret = q->data[q->f]; // stroing front element into ret
    ++q->f;//increasing front as following turn will come.
    return ret;
}
int checkfront(struct queue *q)
{
    return q->data[q->f]; //for displaying front of queue.
}
int checkrear(struct queue *q)
{
    return q->data[q->r]; //displaying rear of queue.
}
int main()
{
    struct queue q={0,-1}; //initialized front to 0 and rear to -1.
    int choice, value;
    do
    {
        printf("\n\nChoose\n1.Enqueue\n2.Dequeue\n3.Checkfront\n4.Checkrear\n5.EXIT\n");
        printf(">");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if (isFull(&q)) printf("Queue is Full.\n");
            else{
                printf("Enter Value to enqueue: ");
                scanf("%d",&value);
                enqueue(&q,value);
                printf("%d is queued.",value);
            }
            break;
        case 2:
            if(isEmpty(&q)) printf("Queue is empty.\n");
            else{
                printf("%d is removed from the queue.\n",dequeue(&q));
            }
            break;
         case 3:
            if(isEmpty(&q)) printf("Queue is empty.\n");
            else{
                printf("%d is at the front of the queue.\n",checkfront(&q));
            }
            break;
         case 4:
            if(isEmpty(&q)) printf("Queue is empty.\n");
            else{
                printf("%d is at the rear of the queue.\n",checkrear(&q));
            }
            break;
         case 5:
            printf("Bye Bye!\n");
            break;
        default:
            printf("Enter 1,2,3,4 or 5 only.\n");
            break;
        }
    } while (choice !=5);
    return 0;    
}