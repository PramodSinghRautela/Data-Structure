#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    
    struct Node *p=head;
    if(p->data==101){
        p=p->next;
    }
    do{
        printf("Element: %d\n",p->data);
    
        p=p->next;
    }while(p->next!=head);
    
    printf("Element: %d\n",p->data);
}

struct Node* searchNode(struct Node*head,int value){
    struct Node *ptr=head;
    struct  Node *qtr=head->next;

    while(qtr->data != value){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    if(qtr->data == value){
        ptr->next=qtr->next;
        free(qtr);
    }
    
    return head;
}

int main(){
     
    int value;

    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head   = (struct Node*)malloc(sizeof(struct Node)) ;
    first  = (struct Node*)malloc(sizeof(struct Node)) ;
    second = (struct Node*)malloc(sizeof(struct Node)) ;
    third  = (struct Node*)malloc(sizeof(struct Node)) ;
    fourth = (struct Node*)malloc(sizeof(struct Node)) ;

    head->data=101;
    head->next=first;

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=head;
    
    printf("before deletion of node:\n");
    display(head);


    printf("Enter the value to delete: ");
    scanf("%d",&value);

    searchNode(head,value);
    printf("After deletion of node:\n");
    display(head);
  
    return 0;

}
