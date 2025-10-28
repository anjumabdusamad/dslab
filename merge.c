#include<stdio.h>
int main(){
	int n1,n2,n3,i,j;
	printf("Enter the number of elements :");
	scanf("%d",&n1);
	printf("Enter %d elements :",n1);
	int arr1[n1];
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter the number of elements :");
        scanf("%d",&n2);
        printf("Enter %d elements :",n2);
        int arr2[n2];
        for(i=0;i<n2;i++){
                scanf("%d",&arr2[i]);
        }

	n3=n1+n2;
	int merge[n3];

	for(i=0;i<n1;i++){
		merge[i]=arr1[i];
	}

	for(j=0;j<n2;j++){
		merge[i]=arr2[j];
		i++;
	}

	printf("The Merge of array is :");
	for(i=0;i<n3;i++){
		printf("%d ",merge[i]);
	}

	printf("\n");

	return 0;
}
