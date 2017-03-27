#include<stdio.h>
int main(){
	int arr[5]={7,3,9,2,6};
	int i,j,size=5,temp;
	printf("unsorted array is: \n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(arr[j]>arr[j+1])
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
		}
	}
	printf("sorted array is:\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 0; 
}
