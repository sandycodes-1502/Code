#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head = NULL;
    int choice;
    printf("Enter your choice:\n");
    printf("1. Insert Node at end\n2. Display List\n3. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            printf("Enter data: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            } else {
                struct Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            printf("Node inserted.\n");
        }
        break;
    case 2:
        {
            struct Node* temp = head;
            if (temp == NULL) {
                printf("List is empty.\n");
            } else {
                printf("Linked List: ");
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
            }
        }
        break;
    
    case 3:
        printf("Exiting...\n");
        free(head);
        return 0;
    
    default:
        break;
    }

    return 0;
}
