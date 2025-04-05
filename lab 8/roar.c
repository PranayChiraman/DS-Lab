#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node **head)
{
    struct Node *temp = *head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
}
}
void add(struct Node **head)
{
    struct Node *temp = *head,*nnode,*head2=NULL,*temp2;
    while(temp->next!=0)
    {
        nnode=(struct Node*)malloc(sizeof(struct Node));
        nnode->next=NULL;
        nnode->data=temp->data+temp->next->data;
        if (head2 == NULL) {
            head2 = nnode;
            temp2 = nnode;
        } else {
            temp2->next = nnode;
            temp2 = nnode;
        }
        temp=temp->next;
    }
    printf("The added linked list: ");
    print(&head2);
}
void main()
{
    struct Node *head=NULL;
    int choice, k;
    struct Node *temp;
    do {
        struct Node *nnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;

        if (head == NULL) {
            head = nnode;
            temp = nnode;
        } else {
            temp->next = nnode;
            temp = nnode;
        }

        printf("Enter 1 or 0 to continue: ");
        scanf("%d", &choice);
    } while (choice != 0);

    printf("The linked list: ");
    print(&head);
   add(&head);
}
