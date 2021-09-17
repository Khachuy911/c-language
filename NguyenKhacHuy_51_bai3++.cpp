#include<stdio.h>
#define N 100
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
void tbc(int arr[],int n){
	int count=0,s=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0 && i%2==0){
			s+=arr[i];
			count++;
		}
	}
	if(count!=0){
	printf("\nTong la: %d",s);
	printf("\nTBC= %.3f",(float)s/count);
	}else printf("Khong co so thoa man!");
}
void xoaAm(int arr[],int n){
	for(int j=0;j<n;j++){
	if(arr[j]<0){
		for(int i=j;i<=n;i++){
			arr[i]=arr[i+1];
		}
	n--;
	j--;
	}
}
xuat(arr,n);
}
void copy(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
			}
		}
	}
	xuat(arr,n);
}
void loai(int arr[],int n){
		for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					while(arr[i]==arr[j]){
						for(int h=j;h<n;h++){
							arr[h]=arr[h+1];
							}
							n--;
					}
				}
		}
	xuat(arr,n);
}
int main(){
	int arr[N],n,crr[N];
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while (n<5 || n>100);
	nhap(arr,n);
	xuat(arr,n);
	//tbc(arr,n);
	//xoaAm(arr,n);
	//copy(arr,n);
	printf("\nsau khi loai cac phan tu trung nhau: ");
	loai(arr,n);
}
