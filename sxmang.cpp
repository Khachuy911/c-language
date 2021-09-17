#include<stdio.h>
#define gom 10
void nhap(int a[],int n){
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0	;i<n;i++){
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void hienThi(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
void bublesort(int a[],int n){
	for(int i =0;i<n;i++){
		for(int j=gom-1;j>i;j--){
			if(a[j]<a[j-1]){
				int tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
		}
	}
}
int main(){
	int a[gom];
	int n;
	nhap(a,gom);
	printf("truoc khi sx: ");
	hienThi(a,n);
	bublesort(a,gom);
	printf("\nsau khi sx: ");
	hienThi(a,n);
	return 0 ;
}
