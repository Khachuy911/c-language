#include<stdio.h>
#define N 100
void nhap(int arr[][N],int c,int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int c,int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
void tinh(int arr[][N],int c,int h){
	int i,j=0,t;
	while(j<c){
		i=0;
		t=0;
		while(i<h){
		t+=arr[i][j];
		++i;
	}printf("KQ=%d\t",t);
	j++;
	}
}
int main(){
	int arr[N][N],c,h;
	printf("nhap so cot: ");
	scanf("%d",&c);
	printf("nhap so hang: ");
	scanf("%d",&h);
	nhap(arr,c,h);
	xuat(arr,c,h);
	tinh(arr,c,h);
}
