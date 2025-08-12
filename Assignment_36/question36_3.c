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
void DisplayProduct(PNODE first)
{
    int iDigit = 0,iMul = 0;
    while (first != NULL)
    {
        iMul = 1;
        while (first->data != 0)
        {
            iDigit = (first->data) % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMul = iMul * iDigit;
            first->data = (first->data) / 10; 
        }
        printf("%d\t",iMul);
        first = first->next;
    }
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,20);
    InsertFirst(&head,11);
    InsertFirst(&head,32);
    InsertFirst(&head,41);

    
    Display(head);

    DisplayProduct(head);

    return 0;
}