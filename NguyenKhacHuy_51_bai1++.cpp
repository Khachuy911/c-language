#include<stdio.h>
#include<math.h>
int n;
float x;
void nhap(){
	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap n: ");
	scanf("%d",&n);
}
float tinh(){
	float Q=exp(x+1);
	for(int i=1;i<=n;i++){
		Q+=(pow((x+1),i))/(x+i);
	}
	return Q;
}
int main(){
	nhap();
	printf("%f",tinh());
}
