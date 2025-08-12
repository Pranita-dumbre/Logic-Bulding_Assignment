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

bool DisplayPrime(PNODE first)
{
    int iFalg = false;
    int iCnt = 0;
    int iFact = 0;

    while(first != NULL)
    {
        iFact = first->data;

        bool iFound = false;
        
        if(iFact < 2)
        {
            iFound = false;
        }
        else
        {
            for (iCnt = 2; iCnt <= (iFact/2); iCnt++)
            {
                if(iFact % iCnt == 0)
                {
                    return iFound;
                }
            }
        }
        if(iFound)
        {
            printf("%d",iFact);
            return iFalg;
        }
        first = first->next;
    }
    return iFalg;     
}

int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,3);
    InsertFirst(&head,28);
    InsertFirst(&head,2);
    InsertFirst(&head,10);
    InsertFirst(&head,5);
    
    Display(head);

    iRet = DisplayPrime(head);

    if(iRet == true)
    {
        printf("%d",iRet);
    }
    else
    {
        printf("There is no prime number in it\n");
        
    }

    return 0;
}