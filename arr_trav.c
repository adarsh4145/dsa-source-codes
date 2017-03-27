#include<stdio.h>
void traverse(int *, int);
int main(){
	int arr[5]={1,3,6,3,8};
	int n=5;
	printf("press any key to perform traversal...\n");
	getch();
	traverse(arr,n);
	return 0;	
}
void traverse(int *name, int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d ",name[i]);
}
