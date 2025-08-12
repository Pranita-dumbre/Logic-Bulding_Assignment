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
void DisplayLarge(PNODE first)
{
    int iDigit = 0,temp = 0;
    int iMin  = 0;
    while (first != NULL)
    {
        iMin = 0;
        temp = first->data;
    
        while (temp != 0)
        {
            iDigit = temp % 10;
        
            if(iDigit > iMin)
            {
                iMin = iDigit;
            }
            temp = temp / 10; 
        }
        printf("%d\t",iMin);
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

    DisplayLarge(head);

    return 0;
}