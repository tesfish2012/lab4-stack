#include<stdlib.h>
#include<stdio.h>
int main(){
	int size=0 ,top=-1;

	printf("enter the size of stack\n");
	scanf("%d",&size);
	int stack[size];
	int data=0;
	if(top==size-1){
		printf("the stack overflows");
		}
	else{
		while(top<size-1){
			top++;
			printf("enter the data to the top of stack %d=",top);
			scanf("%d",&data);
			stack[top]=data;
			
		}
		int i=0;
		printf("the pushed data to stack is:\n");
		for(i=0;i<=size-1;i++){
			printf("%d\n",stack[i]);
		}
	}
printf("\n\n\n");	
 if(top<0){
 	printf("the stack is empty");
 }	
 else{
 	printf("the stack is poped in in this order\n");
    for(top=size-1;top>-1;top--){
      data=stack[top];
	  printf("%d\n",data);
	}
 }	
}


