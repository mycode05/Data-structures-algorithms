#include<stdio.h>
#include<stdlib.h>
int top=-1,a[10];
void push(){
	if(top==10){
		printf("\nStack is full!!");
	}
	else{
		int value;
	    printf("\nEnter the value to insert:");
	    scanf("%d",&value);
	    top=top+1;
	    a[top]=value;
	}
}
void pop(){
	if(top==-1){
		printf("\nStack is empty!!");
	}
	else{
		int t=a[top];
		a[top]=NULL;
		top=top-1;
		printf("\nPoped element is %d",t);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",a[i]);
	}
}
void main(){
	int op;
	do{
		printf("\n-------------------------------------------------");
		printf("\n1.PUSH()\n2.POP()\n3.DISPLAY()\n4.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&op);
		switch(op){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: printf("\nProgram exited"); exit(0); break;
			default: printf("\nPlease! Enter valid choice");
		}
	}while(1);
}