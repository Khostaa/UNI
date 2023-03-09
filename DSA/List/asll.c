//Implementation of Singly Linked List with all Functions

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
    NewNode = (NodeType*)malloc(sizeof(NodeType)); //dynamic memory allocation
    if(NewNode == NULL)
    {
        printf("Memory Allocation failed.\n");
        return NewNode;
    }
    else
    {
        NewNode -> data = element;
        NewNode -> next = NULL;
        return NewNode;
    }
}
//insertion at beginning
void insertatbeginning(int element)
{
    NodeType *NewNode;
    NewNode = createNode(element);
    if(first == NULL) // if list is empty
    {
        first = last = NewNode; // inserted node will be first node
        printf("Success\n");
    }
    else
    {
        NewNode->next = first; // next of inserted node points to current first node
        first = NewNode; // NewNode becomes the first node
        printf("Success\n");
    }
    printf("\n");
    
}
// insertion at end
void insertatend(int element)
{
    NodeType *NewNode,*temp;
    NewNode = createNode(element);
    if(first == NULL) //if list is empty
    {
        first = last = NewNode; 
        printf("Success\n");
    }
    else
    {
        temp = first;
        //traverse to last position
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode; // Current lastNode points to NewNode
        last = NewNode; // NewNode becomes last
        printf("Success! %d is inserted at end\n",last->data);
    }
}

void insertatposition(int element,int position)
{
    NodeType *NewNode,*temp;
    NewNode = createNode(element);
    if(first == NULL) //if list is empty
    {
        first = last = NewNode;
        printf("Success\n");
    }
    else
    {
        temp = first;
        int i=1;
        //navigate to a position 
        while(i<position-1)
        {
            temp = temp->next;
            i++;
        }
        NewNode->next = temp->next; //NewNode points to Current node of the position
        temp->next = NewNode; // node just before current position points to NewNode
        printf("Success! %d is inserted at position %d.\n",element,position);
    }
}

void deleteatbeginning()
{
    NodeType *temp;
    if(first == NULL)
    {
        printf("List is Empty!\n");
    }
    else if(first->next == NULL) //if there is only one element in list
    {
        temp = first;
        first = NULL;
        free(temp);
        printf("Success\n");
    }
    else
    {
        temp = first; // temp holds first node
        first = first->next; // 2nd node becomes new first node
        printf("%d is deleted.\n",temp->data);
        free(temp);   // remove current first node
    }
}
void deleteatend()
{
    NodeType *temp,*temp2;
    if(first == NULL)
        printf("List is Empty!\n");
    // if list contains only one element
    else if (first->next == NULL)
    {
        temp = first;
        first = NULL;
        printf("%d is deleted.\n",temp->data);
        free(temp);

    }
    else
    {
        temp = first;
        // navigate to last of list
        while (temp->next!=NULL)
        {
            temp2 = temp; // temp2 holds previous node of temp
            temp = temp->next; //goes all the way to last node
        }
        temp2->next = NULL; // after deletion of last node, Current 2nd last node becomes Last node and point to NULL
        printf("Deleted item is %d\n",temp->data);
        free(temp); // remove current last node
        printf("Success\n");

    }
}
void deleteatposition(int position)
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
        printf("Success!\n");
    }
    else
    {
        temp = first;
        int i=1;
        while(i<position-1)
        {
            temp = temp->next; // temp goes to position-1
            i++;
        }
        temp2 = temp->next; // temp2 holds current position node
        temp->next = temp2->next; // Current position node points to its following node which will replace it
        printf("Deleted item is %d\n",temp2->data);
        free(temp2);    // Current position node is freed
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
        printf("1.Insert at Beginning\t2.Insert at End\t3.Insert at Specific Position\n4.Delete at Beginning\t5.Delete at End\t6.Delete at Specific Position\n7.Display\t8.Exit\n");
        printf("Choice?\n");
        printf(">");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element to insert: ");
            scanf("%d",&element);
            insertatbeginning(element);
            break;
        case 2:
            printf("\nEnter element to insert: ");
            scanf("%d",&element);
            insertatend(element);
            break;
        case 3:
            printf("Enter element to insert: ");
            scanf("%d",&element);
            int position;
            printf("Enter position to insert at: ");
            scanf("%d",&position);
            insertatposition(element,position);
            break;
        case 4:
            deleteatbeginning();
            break;
        case 5:
            deleteatend();
            break;
        case 6:
            printf("Enter position to delete at: ");
            scanf("%d",&position);
            deleteatposition(position);
            break;
        case 7:
            display();
            break;
        case 8:
            printf("Bye Bye!\n");
            break;
        default:
            printf("Enter valid choices only.\n");
            break;
        }
    } while (choice!=8);
    return 0;
}