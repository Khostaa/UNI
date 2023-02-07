// to be modified
//modified version of SLL
#include <stdio.h>
#include <stdlib.h>
struct SLL
{
    int data;
    struct SLL *next;
};
typedef struct SLL node;
node *first= NULL,*last;
void insert(int);
void delete();
void display();
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
            scanf("%d",&insert);
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
void insert(int element)
{
    node *temp;
    // creating node if not present intially
    temp = (node*)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else //assign element to temp
    {
        temp -> data = element;
        temp -> next = NULL;
    }
    // if list contains no element
    if(first->next == NULL)
    {
        first = last = temp;
        printf("Success.\n");
    }
    else 
    {
        temp ->next = first; // make previous first as next
        first = temp; //then insert element at first
        printf("Success.\n");
    }

}
void delete()
{
    node *temp,*temp2;
    if(first == NULL)
    {
        printf("List is Empty!\n");
    }
    //if there is only one element in list
    else if( first == last)
    {
        temp = first;
        first = last = NULL;
        printf("Deleted item is %d.\n",first-> data);
        free(temp);
    }
    // many elements is list
    //deletion from last
    else
    {
        temp = first;
        while( temp->next != NULL)
        {
            temp = temp ->next;
        }
        temp2 = temp->next;
        printf("Deleted item is %d.\n",temp2->data);
        free(temp2);
        last = temp;
        printf("Deletion Success.\n");
    }
}
void display()
{
    node *temp;
    if(first == NULL)
    {
        printf("List is empty.\n");
    }
    else{
            printf("Current List is : ");
            temp = first;
            do
            {
                printf("%d\t",temp->data);
                temp = temp->next;
            } while (temp->next != NULL);
            printf("\n");   
    }
}