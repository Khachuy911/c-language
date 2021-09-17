#include<stdio.h>
#define N 100
void nhap(int arr[],int &n){
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	   printf("arr[%d]=",i);
	   scanf("%d",&arr[i]);
}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++)
	printf("%5d",arr[i]);
}
void ktra(int arr[],int n){
	int counta=0,countb=0;
     for(int i=0;i<n;i++){
     	if(arr[i]>0){
     		counta++;
     	}
		 else if(arr[i]<0){
     		countb++;
		 } 
	}
	printf("\nso duong co %d so",counta);
	printf("\nso am co %d so",countb);
}
int main(){
	int arr[100];
	int counta,countb,n;
	nhap(arr,n);
	xuat(arr,n);
	ktra(arr,n);
	return 0 ;
}
