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
void Palindrome(PNODE first)
{
    int iDigit = 0, iRev = 0,iNo = 0,temp = 0;
    while (first != NULL)
    {
        iNo = first->data;
        iRev = 0;
        temp = iNo;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10; 
        }
        if(iRev == temp)
        {
            printf("%d\t",temp);
        }
          
        first = first->next;
    }
        
}
int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,21);
    InsertFirst(&head,99);
    InsertFirst(&head,101);
    InsertFirst(&head,110);

    Display(head);

    Palindrome(head);

    return 0;
}