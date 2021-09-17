#include<stdio.h>
#define N 100
void nhap(int arr[][N],int m,int n)
{
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][N],int m,int n)
{
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
}
void sx(int arr[][N],int m,int n)
{
	for(int i=1;i<=m;i+=2){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k+=2){
			    for(int h=1;h<=n;h++){
			    	if(arr[i][j]<arr[k][h]){
			    		int tmp=arr[i][j];
			    		    arr[i][j]=arr[k][h];
			    		    arr[k][h]=tmp;
					}
				}	
			}
		}
	}
}
int main(){
	int arr[N][N],m,n;
	printf("nhap hang: ");
	scanf("%d",&m);
	printf("nhap cot: ");
	scanf("%d",&n);
	nhap(arr,m,n);
	xuat(arr,m,n);
	printf("sau khi sx la:\n");
	sx(arr,m,n);
	xuat(arr,m,n);
	return 0;
}
