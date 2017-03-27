#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5},n=5,i=0,loc;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	scanf("%d",&loc);
	for(i=loc;i<n;i++)
		a[i]=a[i+1];
	n--;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;	
}
