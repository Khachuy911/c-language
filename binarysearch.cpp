#include<stdio.h>
#define soLuong 50
void nhap(int arr[],int &n){
	printf ("nhap n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",arr[i]);
	}
}
void 
