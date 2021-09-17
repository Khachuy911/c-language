#include<stdio.h>
int main(){
	int a,b;
	float x;
	printf("giai pt bac nhat ax+b = 0");
	printf("\nnhap a,b: ");
	scanf("%d%d",&a,&b);
	if(a!=0){
		x = (float)(-b)/a;
		printf("KQ= %f",x);
	} else printf("nhap lai a!=0 !");
	return 0 ;
}
