#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next; 
};
struct Node *head1 = NULL,*head2= NULL;
void display(int l,int r)
{
    struct Node * temp;
    printf("Stack 1: ");
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
    printf("Stack 2: ");
    temp=head2;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
void push(int l,int r)
{
    int k=0;
    printf("Enter value for stacks 1: \n");
    if(k<=l)
   {
    while(k!=l)
   {
     struct Node *nnode=(struct Node*)malloc(sizeof(struct Node));
     nnode->next=NULL;
     printf("Enter The value: ");
     scanf("%d", &nnode->data);
     if(head1==NULL)
     {
        head1=nnode;
     }
     else
     {
        nnode->next=head1;
        head1=nnode;
     }
    k++;
   }
}
printf("Enter value for stacks 2: \n");
    while(k!=r+l)
   {
     struct Node *nnode=(struct Node*)malloc(sizeof(struct Node));
     nnode->next=NULL;
     printf("Enter The value");
     scanf("%d", &nnode->data);
     if(head2==NULL)
     {
        head2=nnode;
     }
     else
     {
        nnode->next=head2;
        head2=nnode;
     }
    k++;
}
}
void main()
{
   int l,r;
   printf("Enter the length of first stacks: ");
   scanf("%d", &l);
   printf("Enter the length of second stacks:");
   scanf("%d", &r);
   printf("\n");
   push(l,r);
   display(l,r);
}