#include<stdio.h>
int convert (int a){
	int dao=0;
	while(a>0){
		int i=a%10;
		dao=dao*10 +i;
		a/=10;
	}
	return dao;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Sau khi dao: %d",convert(n));
}
