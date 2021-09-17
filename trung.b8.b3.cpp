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
    int count=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
		count++;
	}
	printf("\nCo %d so la uoc cua n",count);
}
int main(){
	int arr[N],n;
	nhap(arr,n);
	xuat(arr,n);
	Ktra(arr,n);
	return 0 ;
	
}
