#include<stdio.h>
int main(){
	float x,y,h,s;
	printf("nhap 2 day: ");
	scanf("%f%f",&x,&y);
	printf("nhap chieu cao: ");
	scanf("%f",&h);
	s=(x+y)*h/2;
	printf("dien tich la: %f",s);
	return 0 ;
}
