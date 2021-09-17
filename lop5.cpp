#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("nhap 4 so nguyen: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int Max=a;
	if(b>Max) Max=b;
	if(c>Max) Max=c;
	if(d>Max) Max=d;
	printf("Max = %d",Max);
	return 0 ;
}
