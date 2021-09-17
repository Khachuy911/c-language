#include<iostream>
#define N 100
using namespace std;
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
void Ktra(int arr[],int n){
	int duong=0,am=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>0){
			duong++;
		}else if(arr[i<0]) am++;
	}
	printf("\nso duong la %d so",duong);
	printf("\nso am la %d so",am);
}
int main(){
	int arr[N],n;
	nhap(arr,n);
	xuat(arr,n);
	Ktra(arr,n);
	return 0;
}
