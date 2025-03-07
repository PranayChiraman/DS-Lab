#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
int main()
{
  struct Node *temp,*nnode;
  head=NULL;
  int choice=1;
  while(choice)
  {
    nnode=(struct Node*)malloc(sizeof(struct Node));
    if(nnode==NULL)
    {
        printf("The memory not alloted");
        return -1;
    }
    printf("Enter the value\n");
    scanf("%d", &nnode->data);
    nnode->next=NULL;
    if(head==NULL)
    {
        temp=nnode;
        head=nnode;
    }
    else
    {
        temp->next=nnode;
        temp=nnode;
    }
    printf("Do you want to continue(1 or 0)\n");
    scanf("%d", &choice);
  }
  temp=head;
  printf("Linked List:\n");
  while(temp!=NULL)
  {
    printf("%d ", temp->data);
    temp=temp->next;
  }
  printf("\n");
  int count=1;
  temp=head;
  struct Node *nnode1,*nnode2,*head1=NULL,*head2=NULL,*temp1,*temp2;
  while(temp!=NULL)
  {
    if((count%2)==0)
    {
        nnode1=(struct Node*)malloc(sizeof(struct Node));
        if(nnode1==NULL)
        {
            printf("The memory not alloted");
            return -1;
        }
        nnode1->next=NULL;
        nnode1->data=temp->data;
        if(head1==NULL)
    {
        temp1=nnode1;
        head1=nnode1;
    }
    else
    {
        temp1->next=nnode1;
        temp1=nnode1;
    }
    }
    else if(count%2!=0){
        nnode2=(struct Node*)malloc(sizeof(struct Node));
    if(nnode2==NULL)
    {
        printf("The memory not alloted");
        return -1;
    }
    nnode2->next=NULL;
     nnode2->data=temp->data;
     if(head1==NULL)
     {
         temp2=nnode2;
         head2=nnode2;
     }
     else
     {
         temp2->next=nnode2;
         temp2=nnode2;
     }
    }
    count++;
    temp=temp->next;
    head=temp;
  }
  printf("Linked List 1: ");
  temp1=head1;
  while(temp1!=NULL)
  {
    printf("%d ", temp1->data);
    temp1=temp1->next;
  }
  printf("\n");
  printf("Linked List 2: ");
  temp2=head2;
  while(temp2!=NULL)
  {
    printf("%d ", temp2->data);
    temp2=temp2->next;
  }
  temp=head;
  return 0;
}