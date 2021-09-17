#include<stdio.h>
#define N 100
void nhap(int Arr[][N],int m,int n){
	puts("nhap cac phan tu mang A:");
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		printf("Arr[%d][%d]= ",i,j);
    		scanf("%d",&Arr[i][j]);
		}
	}
}
void nhap1(int Brr[][N],int m,int n){
	puts("nhap cac phan tu mang B:");
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		printf("Brr[%d][%d]= ",i,j);
    		scanf("%d",&Brr[i][j]);
		}
	}
}
void xuat(int Arr[][N],int m,int n){
	puts("mang 2 chieu la:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",Arr[i][j]);
}
            printf("\n");
}
}
void xuat1(int Brr[][N],int m,int n){
	puts("mang 2 chieu la:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",Brr[i][j]);
}
            printf("\n");
}
}
void XuatTong(int Arr[][N],int Brr[][N],int m,int n){
	int s;
	printf("tong cua 2 mang Arr va Brr la:\n ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			s=Arr[i][j]+Brr[i][j];
			printf("\t%d",s);
		}
		printf("\n");
	}
}
void sx(int arr[][N],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int h=0;h<m;h++){
				for(int k=0;k<n;k++){
					if(arr[i][j]<arr[h][k]){
						int tmp=arr[i][j];
						    arr[i][j]=arr[h][k];
						    arr[h][k]=tmp;
					}
				}
			}
		}
	}
}
int main(){
	int Arr[N][N],Brr[N][N],m,n;
	printf("nhap hang: ");
	scanf("%d",&m);
	printf("nhap cot: ");
	scanf("%d",&n);
	nhap(Arr,m,n);
	xuat(Arr,m,n);
	nhap1(Brr,m,n);
	xuat1(Brr,m,n);
	XuatTong(Arr,Brr,m,n);
	return 0 ;
}
