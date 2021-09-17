#include<stdio.h>
int main(){
	int n;
	float s=0;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s+=(float)1/i;
	}
	printf("KQ=%f",s);
	return 0 ;
}

