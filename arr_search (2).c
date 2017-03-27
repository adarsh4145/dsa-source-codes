#include<stdio.h>
#define MAX 10
int main(){
	int a[]={1,5,8,4,2,9},n=6,i=0,item;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nenter the element to search: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(a[i]=item){
			printf("item at index %d",i-1);
			break;
		}
		else
		printf("item not found.");
	}
	return 0;
}
