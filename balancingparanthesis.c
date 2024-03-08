#include<stdio.h>
char a[10];
int top=-1;
void push(char val){
	top=top+1;
	a[top]=val;
}
void pop(){
	 top=top-1;
}
void main(){
	char s[5],i;
	printf("Enter your string:");
	scanf("%s",s);
	i=0;
	while(s[i] != '\0'){
		if(s[i]=='('){
			push(s[i]);
		}
		else{
			pop();
		}
		i=i+1;
	}
	if(top==-1){
		printf("\nBalanced");
	}
	else{
		printf("\nUnbalanced");
	}
}