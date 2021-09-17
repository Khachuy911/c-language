#include<stdio.h>
#define N 100
void nhap(int arr[][N],int m,int n){
	puts("nhap cac phan tu mang: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int m,int n){
	puts("mang 2 chieu la: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",arr[i][j]);
		}
	    printf("\n");
	}
}
void tinh(int arr[][N],int m, int n){
	int s=0;
	for(int i=0;i<m;i+=2){
		for(int j=0;j<n;j++){
			s+=arr[i][j];
		}
	}
	printf("%d",s);
}
void maxcot1(int arr[][N],int m,int n){
	int max=arr[0][0];
	for(int i=0;i<m;i++){
		if(arr[i][0]>max){
			printf("%d",arr[i][0]);
		}
	}
}
void TinhTich(int arr[][N],int m,int n){
	
}
int main(){
	int arr[N][N],m,n;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	nhap(arr,m,n);
	xuat(arr,m,n);
	printf("tong cua cac hang chan la: ");
	tinh(arr,m,n);
	printf("\nmax o cot 1 la: ");
	maxcot1(arr,m,n);
	
	return 0;
	
}
