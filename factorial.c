#include<stdio.h>
int top=-1,n,a[10];
void push(int val){
	top=top+1;
	a[top]=val;
}
int pop(){
	int t=a[top];
	top=top-1;
	return t;
}
int main(){
	int i,n1,n2,n3,x;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		push(i);
	}
	for(i=1;i<n;i++){
	    n1=pop();
	    n2=pop();
	    n3=n1*n2;
	    push(n3);
	}
	x=pop();
	printf("\nFactorial of %d is: %d",n,x);
	return 0;
}