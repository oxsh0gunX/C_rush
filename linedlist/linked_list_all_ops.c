// linkedlist_all_ops.c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Create node
struct node* create_node(int value) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Insert at beginning
void insert_begin(int value) {
    struct node *newnode = create_node(value);
    newnode->next = head;
    head = newnode;
    printf("Inserted %d at beginning\n", value);
}

// Insert at end
void insert_end(int value) {
    struct node *newnode = create_node(value);

    if (head == NULL) {
        head = newnode;
        printf("Inserted %d at end (empty list)\n", value);
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    printf("Inserted %d at end\n", value);
}

// Insert at any position
void insert_pos(int value, int pos) {
    struct node *newnode = create_node(value);

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        printf("Inserted %d at position 1\n", value);
        return;
    }

    struct node *temp = head;
    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Inserted %d at position %d\n", value, pos);
}

// Delete from beginning
void delete_begin() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct node *temp = head;
    printf("Deleted %d\n", temp->data);
    head = head->next;
    free(temp);
}

// Delete from end
void delete_end() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    if (head->next == NULL) {
        printf("Deleted %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct node *prev = NULL;
    struct node *temp = head;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted %d\n", temp->data);
    prev->next = NULL;
    free(temp);
}

// Delete by value
void delete_value(int value) {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    if (head->data == value) {
        struct node *temp = head;
        head = head->next;
        printf("Deleted %d\n", temp->data);
        free(temp);
        return;
    }

    struct node *prev = head;
    struct node *temp = head->next;

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted %d\n", temp->data);
    free(temp);
}

// Search
void search(int value) {
    struct node *temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("%d found at position %d\n", value, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }

    printf("%d not found\n", value);
}

// Display list
void display() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct node *temp = head;
    printf("List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    insert_begin(10);
    insert_end(20);
    insert_pos(15, 2);
    display();
    delete_value(15);
    delete_end();
    delete_begin();
    display();
}
