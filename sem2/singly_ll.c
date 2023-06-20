#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};

struct node* allocate_node(int val){
    struct node *n = (struct node*) malloc(sizeof(struct node));
    if (n == NULL){
        printf("unable to allocate memory for node");
        return NULL;
    }
    n->val = val;
    n->next = NULL;
    return n;
}

void print_list(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

struct node* insert_front(struct node* head, struct node *n){
    n->next = head;
    //head = n;
    return n;
}

struct node* insert_rear(struct node* head, struct node *n){
    if (head == NULL){ //edge case
        return n;
    }
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

struct node* insert_middle(struct node* head, struct node *n, int pos){
    if (head == NULL){
        return n;
    }
    if (pos == 0){ //edge case
        n->next = head;
        return n;
    }
    int p=0;
    struct node *temp = head;
    while (p != pos-1 && temp != NULL){ //p<pos-1
        temp = temp->next;
        p++;
    }
    if (temp != NULL){ //edge case
        n->next = temp->next;
        temp->next = n;
    }
    return head;
}

struct node* search(struct node *head, int val){
    struct node *temp = head;
    while (temp != NULL){
        if (temp->val == val){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

struct node* delete_front(struct node *head){
    if (head == NULL){
        printf("linked list is empty duh\n");
        return NULL;
    }
    // struct node *temp = head;
    // temp = temp->next;
    // head->next = NULL;
    // return temp;
    printf("deleted node is %d\n", head->val);
    return head->next;
}

struct node* delete_rear(struct node *head){
    if (head == NULL){
        printf("linked list is empty duh\n");
        return NULL;
    }
    if (head->next == NULL){
        printf("deleted node is %d\n", head->val);
        return NULL;
    }
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    printf("deleted node is %d\n", temp->next->val);
    temp->next = NULL;
    return head;
}

struct node* delete_middle(struct node *head, struct node *n){
    if (head == NULL){
        printf("linked list is empty duh\n");
        return NULL;
    }
    if (head == n){ //edge case
        printf("deleted node is %d\n", head->val);
        return head->next;
    }
    struct node* prev = head;
    struct node* temp = head->next;
    while(temp != NULL && temp != n){
        prev=temp;
        temp = temp->next;
    }
    if (temp != NULL){ //edge case
        prev->next = temp->next;
        printf("deleted node is %d\n", temp->val);
    }
    return head;
}

struct node* reverse_list(struct node* head){
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* next;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    struct node* l;
    struct node* head = NULL;

    for(int i=3; i>=1; i--){
        l = allocate_node(i);
        head = insert_front(head, l);
    }
    for(int i=7; i<=9; i++){
        l = allocate_node(i);
        head = insert_rear(head, l);
    }
    for(int i=4; i<=6; i++){
        l = allocate_node(i);
        head = insert_middle(head, l,i-1);
    }
    print_list(head);

    l = search(head,5);
    printf("%d %d ~yea inserion and search works and shiz\n\n",l->val, l->next->val);

    head = delete_front(head);
    head = delete_rear(head);
    head = delete_middle(head,head->next->next->next);
    print_list(head);
    printf("\n");

    head = reverse_list(head);
    print_list(head);

    return 0;
}