#include<stdio.h>
#include<math.h>
int GiaiThua (int n){
	int GiaiThua=1;
	for(int i=1;i<=n;i++){
		GiaiThua*=i;
	}
	return GiaiThua;
}
int main(){
	int n,x,v,p=1;
	float A=1;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("\nnhap x: ");
	scanf("%d",&x);
	for(int i=1;i<=n;i++){
		A+=(float)pow((-1),i)*(pow(x,(2*i)+1)/GiaiThua(2*i));
	}
	printf("gia tri cua A la: %f",A);
}
