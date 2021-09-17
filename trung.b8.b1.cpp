#include<stdio.h>
#define N 100
void nhap(int arr[],int &n){
	printf("nhap n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=1;i<=n;i++){
		printf("\t%d",arr[i]);
	}
}
void dao(int arr[],int n){
	for(int i=n;i>0;i--){
	       printf("\t%d",arr[i]);
		}
}

int main(){
	int arr[N],n;
	nhap(arr,n);
	printf("ban dau: ");
	xuat(arr,n);
	printf("\nsau khi dao: ");
	dao(arr,n);
	return 0;
}
		
		
