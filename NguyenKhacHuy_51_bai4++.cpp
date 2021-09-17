#include<stdio.h>
#include<math.h>
#define N 100
void nhap(float arr[],int n){
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%f",&arr[i]);
	}
}
void xuat(float arr[],int n){
	for(int i=0;i<n;i++)
	{
		printf("\t%.1f",arr[i]);
	}
}
float tinh(float arr[],int n){
	float T=0;
	for(int i=0;i<n;i++){
		T+=pow((-1),i)*arr[i];
	}
	return T;
}
void tach(float arr[],float brr[],float crr[],int n){
	int x=0,v=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			brr[x]=arr[i];
			x++;
		}else {
			crr[v]=arr[i];
			v++;
		}
	}
	printf("\nMang duong la: ");
	xuat(brr,x);
	printf("\nMang am la: ");
	xuat(crr,v);
}
int main(){
	float arr[N],brr[N],crr[N];
	int n;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while (n<1 || n>50);
	nhap(arr,n);
	xuat(arr,n);
	//printf("\nKQ= %.2f",tinh(arr,n));
	tach(arr,brr,crr,n);
	
}
