#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *add_end(struct node *head, int d);

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;

    head->link = ptr;

    int data = 3;
    head = add_end(head, data);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}

struct node *add_end(struct node *head, int d) {
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = d;
    new_node->link = NULL;

    if (head == NULL) {
        head = new_node;
        return head;
    }

    struct node* temp = head;
    while (temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = new_node;
    
    return head;
}

