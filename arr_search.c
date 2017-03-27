#include<stdio.h>
int main(){
	int arr[5]={2,7,5,3,8};
	int i,key,size=5;
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nenter element to find: ");
	scanf("%d",&key);
	for(i=0;i<size;i++){
		if(key==arr[i])
			break;
	}
	printf("%d is at %d location.",key,i);
	return 0;
}
