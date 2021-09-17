#include<Stdio.h>
#include<math.h>
const int N = 100;
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	printf("Mang la: ");
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
void inNguoc(int arr[],int n){
	printf("\nNguoc lai la: ");
	for(int i=n-1;i>=0;i--){
		printf("\t%d",arr[i]);
	}
}
void chinhPhuong(int arr[],int n){
	printf("\nCac so chinh phuong la: ");
	for(int i=0;i<n;i++){
		int sqr=sqrt(arr[i]);
	if(sqr*sqr==arr[i])
		printf("\t%d",arr[i]);
}
}
int main(){
	int arr[N],n;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0 || n>=100);
	nhap(arr,n);
	xuat(arr,n);
	inNguoc(arr,n);
	chinhPhuong(arr,n);
}
