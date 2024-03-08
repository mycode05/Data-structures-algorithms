//binary search
#include<stdio.h>;
int binary_search(int a[],int start,int end,int key){
	if(start <= end){
		int mid=(start+end)/2;
		if(a[mid]>key){
			return binary_search(a,start,mid-1,key);
		}
		else if(a[mid]<key){
			return binary_search(a,mid+1,end,key);
		}
		else if(a[mid]==key){
			return mid+1;
		}
		else{
			return -1;
		}
	}
	else{
		return -1;
	}
}
int main(){
	int n,a[10],key,i,found;
	printf("Enter the number of values:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the key value:");
	scanf("%d",&key);
	found=binary_search(a,0,n,key);
	if(found==-1){
		printf("\nkey not found!!!");
	}
	else{
		printf("\nKey found at %d position",found);
	}
	return 0;
}