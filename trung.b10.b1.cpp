#include<stdio.h>
#define N 100
void nhap(int arr[][N],int m,int n){
	puts("nhap cac phan tu mang: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int m ,int n){
	puts("xuat cac phan tu mang: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}
void sx( int arr[][N],int m,int n){
	int x,y;
	printf("chi so cua hàng dau tien muon doi cho la: ");
	scanf("%d",&x);
	printf("chi so cua hàng hai muon doi cho la: ");
	scanf("%d",&y);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(x>=0 && x<m  && y>=0 && y<m){
			  int tmp=arr[x][j];
			    arr[x][j]=arr[y][j];
			    arr[y][j]=tmp;
			   

}
}
}
}
int main(){
	int arr[N][N],m,n;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	nhap(arr,m,n);
	xuat(arr,m,n);
	sx(arr,m,n);
	xuat(arr,m,n);
}
