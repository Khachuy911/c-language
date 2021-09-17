#include<stdio.h>
#include<math.h>
const int N =100; 
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
void vongLap(int arr[],int n,int k){
	int x;
	for(int j=1;j<=k;j++){ 
	x=arr[0];
	for(int i=0;i<n;i++){
		arr[i]=arr[i+1];	
	}
	arr[n-1]=x;
	}
}
int main(){
	int arr[N],n,k;
	printf("nhap n: ");
	scanf("%d",&n);
	nhap(arr,n);
	xuat(arr,n);
	printf("\nnhap so k lan dich trai xoay vong : ");
	scanf("%d",&k);
	vongLap(arr,n,k);
	printf("\n");
	xuat(arr,n);
}
