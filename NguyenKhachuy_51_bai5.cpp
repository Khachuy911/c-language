#include<stdio.h>
int main(){
	int m,n,a;
	printf("Nhap m,n,a: ");
	scanf("%d%d%d",&m,&n,&a);
	int sSan=m*n;
	int sGach=a*a;
	float gach;
	gach =(float)sSan/sGach;
	printf("so gach can la %.2f vien",gach);
}
