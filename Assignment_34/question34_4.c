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

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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

int SearchFirstOcc(PNODE first, int no)
{
    int iCnt = 1;

    while(first != NULL)
    {
        if((first)->data == no)
        {
            return iCnt;
        }
        iCnt++;

        first = (first) -> next;
    }   
}

int Maximum(PNODE first)
{
    int iMax = 0;

    while(first != NULL)
    {
        if(iMax < (first) ->data)
        {
            iMax = first->data;
        }
        
        first = first -> next;
    }
    return iMax;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,1);
    InsertFirst(&head,102);
    InsertFirst(&head,111);
    InsertFirst(&head,1000);
    InsertFirst(&head,88);
    
    Display(head);

    iRet = Maximum(head);

    printf("The largest element in the linklist is : %d",iRet);


    return 0;
}