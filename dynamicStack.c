#include<stdlib.h>
#include<stdio.h>
void create_stack(int size);
void make_push(int num);
void make_pop();
void display();
struct node{
	int data;
	struct node *next;
}*top;
int main(){
	int size,i=1,num;
	printf("enter the intial size of the stack\n");
	scanf("%d",&size);
	top=NULL;
	create_stack(size);
	printf("enter any number to pop at the top\n");
	scanf("%d",&num);
    make_pop();
}	
void create_stack(int size){
 struct node *new_node; 
    int i =1,num;
    while (i<=size)
    {
       new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data top of the stack\n");
        scanf("%d",&num);
            new_node->data=num;
            new_node->next=top;	
            top = new_node;
       i++;	
	   display();
    }    
	top->next= NULL;
    new_node = top;  
	
}

void make_pop()
{
    struct node *pop;
    if(top == NULL)
    {
        printf("Under flow occurs");
    }
    else
    {
        pop = top;
        top = top->next;
        printf("\n the data at the top is poping %d\n", pop->data);
        free(pop);  
        display();
    }
}

void display(){
	struct node *new_node;
	printf("\n the stck contains \n");
	new_node=top;
    while (new_node != NULL)
    {
        printf("%d=>", new_node->data);
        new_node =new_node -> next;
    }
}

