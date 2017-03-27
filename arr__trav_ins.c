#include<stdio.h>
#define MAX 10
int main(){
	//traversing
	int a[MAX],n,i,loc,p;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	//insertion at any point in array
	printf("\nenter the item to instert and its location: ");
	scanf("%d %d",&p,&loc);
	for(i=n;i>=loc;i--)
		a[i+1]=a[i];
	n=n+1;
	a[loc]=p;
	printf("array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
