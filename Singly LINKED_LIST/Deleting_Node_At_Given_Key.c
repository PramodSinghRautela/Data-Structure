#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node *Next;
};

//Function to display the list.

void DisplayList(struct Node *head)
{

    while(head->Next!=NULL){

        if(head->key==10110){
         head=head->Next;
        }
        else{
            printf("Elements: %d\n",head->key);
            head=head->Next;
        }

    }
    printf("Elements: %d\n",head->key);
    
}

//Function to search the given key
struct Node *searchkey(struct Node *head,int value)
{
    struct Node *ptr=head;
    struct Node *qtr=head->Next;

    while(qtr->key!=value && qtr->Next!=NULL){

        ptr=ptr->Next;
        qtr=qtr->Next;
    }
    if(qtr->key==value){
        ptr->Next=qtr->Next;

        free(qtr);
    }
    return head;
}


int main(){

    int n;


    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Giving the nods Memory using Malloc

    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //Inserting elements in Nods And Passing the address of Next Node.
    head->key=10110;
    head->Next=first;

    first->key=10;
    first->Next=second;

    second->key=20;
    second->Next=third;

    third->key=30;
    third->Next=fourth;

    fourth->key=40;
    fourth->Next=NULL;

    printf("List before:\n");
    DisplayList(head);

    printf("Enter the Key value to search And Delete: ");
    scanf("%d",&n);
    
    searchkey(head,n);
    printf("List After:\n");
    DisplayList(head);
    return 0;
}
