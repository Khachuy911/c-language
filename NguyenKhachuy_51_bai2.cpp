#include<stdio.h>
int main(){
	unsigned int a,b;
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	printf("Tong= %d",a+b);
	printf("\nHieu= %d",a-b);
	printf("\nTich= %d",a*b);
	printf("\nThuong= %.2f",(float)a/b);
	printf("\nDu= %d",a%b);
	return 0 ;
}
