//fibanocci search
#include<stdio.h>
int MIN(int x,int y){
	if(x>y) return y;
	else return x;
}
void main(){
	int n,a[10],key,i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	printf("\nEnter the values:");;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the key value:");
	scanf("%d",&key);
	int fib,fib1=1,fib2=0;
	fib=fib1+fib2;
	while(fib<n){
		fib2=fib1;
		fib1=fib;
		fib=fib1+fib2;
	}
	int offset=-1;
	while(fib>=1){
		i=MIN(fib2+offset,n-1);
		if(a[i]<key){
			fib=fib1;
			fib1=fib2;
			fib2=fib-fib1;
			offset=i;
		}
		else if(a[i]>key){
			fib=fib2;
			fib1=fib1-fib;
			fib2=fib-fib1;
		}
		else if(a[i]==key){
			printf("\nKey is found at %d position",i+1);
			break;
		}
	}
	if(fib <1){
		printf("\nElement not found!!!");
	}
}