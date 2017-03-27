#include<stdio.h>
int main(){
	int arr[7]={1,6,3,9,5};
	int i,item,loc,size=5;
	
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nenter the location:");
	scanf("%d",&loc);
	printf("enter the item:");
	scanf("%d",&item);
	for(i=size;i>=loc;i--){
		arr[i+1]=arr[i];
	}
	arr[loc]=item;
	size=size+1;
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 0;
}

