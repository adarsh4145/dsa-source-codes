#include<stdio.h>
#define MAX 10
int main(){
	int a[MAX],temp,j,i,n;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=n;j>0;j--){
			if(a[j+1]<a[j]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
