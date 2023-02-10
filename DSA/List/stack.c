//Implementation of Stack using SLL
#include <stdio.h>
#include <stdlib.h>

struct SLL
{
    int data;
    struct SLL *next;
};
struct SLL *top;
void push(int);
int pop();
int main()
{
    top == NULL;
    int choice,element;
    do
    {
        printf("\n1.PUSH\n2.POP\n3.EXIT\n");
        printf("Choice?\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Element? ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                element = pop();
                printf("%d is Popped.\n",element);
                break;
            case 3: 
                printf("BYE BYE!\n");
                break;
            
            default:
                printf("Enter valid choices only.\n");
                break;
        }
        
    } while (choice!=3);
    
    return 0;
}
void push(int element)
{
    struct SLL *NewNode;
    NewNode = (struct SLL*)malloc(sizeof(struct SLL));
    if(NewNode == NULL)
    {
        printf("Memory Allocation failed.\n");
    }
    else
    {
        NewNode -> data = element;
        NewNode -> next = NULL;
        //when stack is empty
        if (top == NULL)
        {
            top = NewNode;
        }
        // when stack has some element
        else
        {
            NewNode -> next = top;
            top = NewNode;
        }
        printf("Success. %d is at TOP\n",top->data);
    }
}
int pop()
{
    struct SLL *temp;
    int element;
    if (top == NULL)
    {
        printf("Stack Underflow.\n");
        return -1;
    }
    else
    {
        element = top->data;
        // case 1 when there is single element
        if(top -> next == NULL)
        {
            temp = top;
            free(temp);
            top = NULL;
        }
        else //case 2 when there are more than one element
        {
            temp = top;
            top = top->next;
            free(temp);
        }
        return element;
    }
}