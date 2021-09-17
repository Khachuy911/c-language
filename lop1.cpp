#include<stdio.h>
int main(){
	int x,y,s=1;
	printf("Tinh x^y:");
	printf("\nnhap x,y= ");
	scanf("%d%d",&x,&y);
	for(int i=1 ; i<=y ; i++){
		s *= x; 
	}
	printf("KQ= %d",s);
}
// voi x,y la so nguyen 
