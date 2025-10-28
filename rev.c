#include<stdio.h>
int main(){
	int n,i,temp;
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	printf("Enter %d elements :",n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i< n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-1-i]=temp;
	}
	printf("Reverse of the array is :");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
