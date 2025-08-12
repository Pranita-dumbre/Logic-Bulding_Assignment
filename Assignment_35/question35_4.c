//incomplete
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }

    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}
int SecondMax(PNODE first)
{
    int iCount = 0;
    int iMax = 0;

    while (first != NULL)
    {
        if(first->data >= iMax)
        {
            iMax = first->data;
            iCount++;
        }
        first = first ->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,6);
    InsertFirst(&head,3);
    InsertFirst(&head,88);
    
    Display(head);

    iRet = SecondMax(head);

    printf("Secound maximum number in the linked list is : %d",iRet);

    return 0;
}