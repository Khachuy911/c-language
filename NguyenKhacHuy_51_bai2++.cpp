#include<stdio.h>
#include<math.h>
float tinh(int n,float x){
	float F=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			F+=sin(pow(x,i));
		}
	}else if(n%2!=0){
		for(int i=1;i<=n;i++){
			F+=pow(sin(x),i);
		}
	}
	return F;
}
int main(){
	int n;
	float x;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap x: ");
	scanf("%f",&x);
	printf("%f",tinh(n,x));
}
