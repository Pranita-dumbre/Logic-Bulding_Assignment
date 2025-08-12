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

void DisplayPerfect(PNODE first)
{
    int iFact = 0;
    int i =0;
    int iSum = 0;
    BOOL flag = FALSE;

    printf("The perfect number in the linked list are :\n");

    while(first != NULL)
    {
        
        iFact = first->data;
        iSum = 0;

        for(i = 1; i <= (iFact/2);i++)
        {
            if(iFact % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == iFact)
        {
            printf("%d\n",iFact);
            flag = TRUE;
        }  
        first = first -> next;
    }
    if(flag == false)
    {
        printf("There is no any perfect number in the linkedlist");
    }    
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

    DisplayPerfect(head);

    return 0;
}