#include<stdio.h>
#include<math.h>
#define M 100
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void nhapTheoDe(int arr[],int n){
	arr[0]=31;
	for(int i=1;i<n;i++){
		int s=0;
		s=n*i*i;
		arr[i]=s;
	}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
int SNT (int a){
	if(a==0 || a==1){
		return false; 
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
void chen(int arr[],int ,)
int main(){
	int arr[M],n;
	printf("nhap n: ");
	scanf("%d",&n);
	nhap(arr,n);
	xuat(arr,n);
	for(int i=0;i<10;i++){
		if(SNT(arr[i])){
			printf("\n%d\t",arr[i]);
		}
	}
}
