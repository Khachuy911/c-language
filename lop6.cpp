#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("nhap 4 so: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int Min = a;
	if(Min>b) Min=b;
	if(Min>c) Min=c;
	if(Min>d) Min=d;
	printf("Min = %d",Min);
	return 0 ;
}
