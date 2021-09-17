#include<stdio.h>
#define N 100
void nhap (int arr[],int n){
	for(int i=1;i<=n;i++){
	printf("arr[%d]= ",i);
	scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n ){
	for(int i=1;i<=n;i++){
		printf("\t%d",arr[i]);
	}
}
void find(int arr[],int n){
	int max=arr[1],min=arr[1];
	for(int i=1;i<=n;i++){
		if(arr[i]%3==0 && arr[i]>=max){
			max=arr[i];
		} 
		if(arr[i]%3!=0 && arr[i]<=min){
			min=arr[i];
		}
	}
	printf("\nso lon nhat chia het cho 3 la: %d",max);
	printf("\nso nho nhat khong chia het cho 3 la: %d",min);
}
void xoa(int arr[],int n){
	int s=0,count=0,dem=0;
	float tbc;
	for(int i=1;i<=n;i++){
		if(arr[i]%3==0){
			count++;
			s+=arr[i];
		}
	}
	if(count!=0)
	tbc=(float)s/count;
	printf("\nSo trung binh cong: %.2f",tbc);
	for(int i=1;i<=n;i++){
		if(arr[i]==tbc){
			dem++;
			int k=i;
			for(int j=k;j<=n;j++){
				arr[j]=arr[j+1];
			}
			n--;
		}
	}if(dem!=0)
	xuat(arr,n);
	else printf("\nTrong mang khong co gia tri bang TBC");
}

int main(){
	int arr[N],n;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while( n<1 || n>30 );
	nhap(arr,n);
	xuat(arr,n);
	find(arr,n);
	xoa(arr,n);
}
