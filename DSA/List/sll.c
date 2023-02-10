//Implementation of Singly Linked List
#include <stdio.h>
#include <stdlib.h>
struct SLL
{
    int data;
    struct SLL *next;
};
typedef struct SLL NodeType; //setting alias of struct SLL to NodeType
NodeType *first,*last;
NodeType* createNode(int element)
{
    NodeType *NewNode;
    NewNode = (NodeType*)malloc(sizeof(NodeType));
    if(NewNode==NULL)
    {
        printf("Memory Allocation failed.\n");
        return NewNode;
    }
    else{
        NewNode->data = element;
        NewNode ->next = NULL;
        return NewNode;
    }
}
//insertion at beginning
void insert(int element)
{
    NodeType *NewNode;
    NewNode = createNode(element);
    if(first == NULL)
    {
        first = last = NewNode;
        printf("Success\n");
    }
    else
    {
        NewNode->next = first;
        first = NewNode;
        printf("Success\n");
    }
    
}
void delete()
{
    NodeType *temp,*temp2;
    if(first == NULL)
        printf("List is Empty!\n");
    // if list contains only one element
    else if (first->next == NULL)
    {
        temp = first;
        first = NULL;
        free(temp);
    }
    else
    {
        temp = first;
        //deletion from last
        while (temp->next!=NULL)
        {
            temp2 = temp;
            temp = temp->next; 
        }
        temp2->next = NULL;
        printf("Deleted item is %d\n",temp->data);
        free(temp);
        // last = temp;~~
        printf("Success\n");
    }
}
void display()
{
    NodeType *temp;
    temp = first;
    if(first == NULL)
    {
        printf("list is empty\n");
    }
    else{
            printf("Current List is : ");
            do
            {
                printf("%d\t",temp->data);
                temp = temp->next;
            } while (temp != NULL);
            printf("\n");   
    }
}
int main()
{
    int element, choice;
    do
    {
        printf("1.Insert\n2.Remove\n3.Display\n4.Exit\n");
        printf("Choice?\n");
        printf(">");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element to insert: ");
            scanf("%d",&element);
            insert(element);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Bye Bye!\n");
            break;
        default:
            printf("Enter 1,2 or 3 only.\n");

            break;
        }
    } while (choice!=4);
    return 0;
}