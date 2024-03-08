//INSERTION SORT
#include<stdio.h>
void insertion_sort(int a[],int n){
	int i=0;
	int j;
	for(i=0;i<n;i++){
		int k=a[i];
		j=i-1;
	while(j>=0 && a[j]>k){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=k;
	
	}
}
void main(){
	int n,a[20],i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	insertion_sort(a,n);
	printf("\nAfter sorting:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}