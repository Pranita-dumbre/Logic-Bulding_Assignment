#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int SearchLasttOcc(PNODE first, int no)
{
    int iCnt = 1,iLast = -1;

    while(first != NULL)
    {
        if((first)->data == no)
        {
            iLast = iCnt;
        }
        first = (first) -> next;
        iCnt++;
    }
    return iLast;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,8);
    InsertFirst(&head,11);
    InsertFirst(&head,30);
    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,11);
    
    Display(head);

    printf("Enter the number which one search last occurance\n");
    scanf("%D",&iValue);

    iRet = SearchLasttOcc(head,iValue);

    printf("The last occrrence of %d at %dth position",iValue,iRet);


    return 0;
}