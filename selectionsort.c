//SELECTION SORT 
#include<stdio.h>
void selection_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		int min=i;
		for(j=i;j<n;j++){
		     if(a[min]>a[j]){
		     	min=j;
   			 }	
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
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
	selection_sort(a,n);
	printf("\nAfter sorting:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}