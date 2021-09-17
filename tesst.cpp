#include<stdio.h>
void nhap (int arr[],int &n){
	for(int i=0; i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuat (int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
    int arr[100],n;
    printf("nhap n: ");
    scanf("%d",&n);
    nhap(arr,n);
    xuat(arr,n);
    return 0 ;
		
}
