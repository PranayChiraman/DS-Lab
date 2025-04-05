#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void print() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* reverse(struct Node *head, int k) {
    struct Node *prev = NULL, *current = head, *next = NULL;
    int count = 0;
    
    // Reverse first k nodes
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // If there are nodes left in the list, link the remaining part
    if (next != NULL) {
        head->next = reverse(next, k);
    }

    return prev; // New head after reversal
}

int main() {
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
    print();

    printf("Enter the number of nodes to be reversed: ");
    scanf("%d", &k);

    head = reverse(head, k);

    printf("The reversed linked list: ");
    print();

    return 0;
}