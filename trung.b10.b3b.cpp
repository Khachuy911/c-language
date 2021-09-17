#include<stdio.h>
#define N 100
void nhap(int arr[][N],int m,int n){
	puts("nhap cac phan tu mang A:");
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		printf("arr[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int m,int n){
	puts("mang 2 chieu la:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",arr[i][j]);
}
            printf("\n");
}
}
void nhap1(int brr[][N],int c,int h){
	puts("nhap cac phan tu mang B:");
    for(int i=0;i<c;i++){
    	for(int j=0;j<h;j++){
    		printf("brr[%d][%d]= ",i+1,j+1);
    		scanf("%d",&brr[i][j]);
		}
	}
}
void xuat1(int brr[][N],int c,int h){
	puts("mang 2 chieu la:\n ");
	for(int i=0;i<c;i++){
		for(int j=0;j<h;j++){
			printf("%5d",brr[i][j]);
}
            printf("\n");
}
}

int main(){
	int arr[N][N],brr[N][N],m,n,c,h;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	nhap(arr,m,n);
	xuat(arr,m,n);
	printf("nhap so hang: ");
	scanf("%d",&c);
	printf("nhap so cot: ");
	scanf("%d",&h);
	nhap(brr,c,h);
	xuat(brr,c,h);
}
