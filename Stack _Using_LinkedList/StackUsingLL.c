#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linklisttraversal(struct node *top){
    while (top!=NULL)
    {
        printf("ELEMENT: %d\n",top->data);
        top=top->next;
    }
    
}
int isEmpty(struct node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct node *top){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node *push(struct node *top,int x){
    if(isFull(top)){
        printf("Stack overflow!!");
    }
    else{
        struct node *n=(struct node*)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;

        return top;
    }
}

int pop(struct node **top){
    if(isEmpty(*top)){
        printf("Stck underflow!!");
    }
    else{
        struct node *n= *top;
        int x=n->data;
        *top=(*top)->next;
        free(n);

        return x;
        
    }
    
}
int peek(struct node *top){
    if(isEmpty(top)){
        printf("Stack empty\n");
    }
    else{
        int x=top->data;
        return x;
    }
}
int main(){
    struct node *top=NULL;
    int n; 
    int choice;
    do{
        printf("  1.PUSH\n  2.POP\n  3.PEEK\n  4.DISPLAY\n  5.EXIT\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element:");
                scanf("%d",&n);
                top=push(top,n);
                break;
            case 2:
                printf("Popped element is %d\n",pop(&top));
                break;
            case 3:
                printf("Top element is %d\n",peek(top));
                break;
            case 4:
                linklisttraversal(top);
                break;
            case 5:
                free(top);
                return 0;
                break;
            default:
                printf("INVALID CHOICE!!");
                break;
    }
    }while(choice);

    return 0;
}
