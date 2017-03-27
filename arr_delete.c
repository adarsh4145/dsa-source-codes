#include<stdio.h>
int main(){
	int arr[10]={1,4,7,2,6,5};
	int i,loc,size=6;
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nenter the location of item to delete: ");
	scanf("%d",&loc);
	for(i=loc;i<size;i++)
		arr[i]=arr[i+1];
	size-=1;
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 0;
}
