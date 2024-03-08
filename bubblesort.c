//BUBBLE SORT
#include<stdio.h>
void bubble_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
}
void main(){
	int a[10],n,i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting:");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	bubble_sort(a,n);
	printf("\nAfter sorting:");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
}