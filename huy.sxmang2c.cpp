#include<stdio.h>
#define N 100
void nhap(int arr[][N],int m,int n){
	puts("nhap phan tu mang: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void sx(int arr[][N],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				for(int h=0;h<n;h++){
					if(arr[i][j]<arr[k][h]){
						int tmp=arr[i][j];
						    arr[i][j]=arr[k][h];
						    arr[k][h]=tmp;
					}  
				}
			}
		}
	}
	printf("max la: %d",arr[m-1][n-1]);
}
void DoiCho(int arr[][N],int m,int n){
	int x,y;
	printf("nhap chi so hang thu nhat: ");
	scanf("%d",&x);
	printf("nhap chi so hang thu 2: ");
	scanf("%d",&y);
	for(int j=0;j<n;j++){
		if(x>=0 && x<m && y>=0 && y<m){
			int tmp=arr[x][j];
			    arr[x][j]=arr[y][j];
			    arr[y][j]=tmp;
		}
	}
}
void TinhTich(int arr[][N],int brr[][N],int crr[][N],int a,int b,int c,int d){
	int j,i;
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			int sum=0;
			for(int k=0;k<c;k++){
				sum+=arr[i][k]*brr[k][j];
			}
			crr[i][j]=sum;
			printf("%5d",crr[i][j]);
		}
		printf("\n");
	}
	
}
void TinhTong(int arr[][N],int brr[][N],int crr[][N],int m,int n){
	int s;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			s=arr[i][j]+brr[i][j];
			printf("%5d",s);
			
		}
		printf("\n");
	}

}
int main(){
	int arr[N][N],m,n,brr[N][N],crr[N][N],a,b,c,d;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	nhap(arr,m,n);
	xuat(arr,m,n);
	sx(arr,m,n);
	printf("\n");
	xuat(arr,m,n);
	DoiCho(arr,m,n);
	xuat(arr,m,n);
	printf("nhap so hang arr: ");
	scanf("%d",&a);
	printf("nhap so cot arr: ");
	scanf("%d",&b);
	printf("nhap so hang brr: ");
	scanf("%d",&c);
	printf("nhap so cot brr: ");
	scanf("%d",&d);
	nhap(arr,a,b);
	xuat(arr,a,b);
	nhap(brr,c,d);
	xuat(brr,c,d);
	if(a==c && b==d){
		
	      printf("tong la:\n");
	      TinhTong(arr,brr,crr,a,b);
		  	
	} else if(b==c){
		
		printf("tich la:\n");
		TinhTich(arr,brr,crr,a,b,c,d);
	
	}
	return 0 ;
}
