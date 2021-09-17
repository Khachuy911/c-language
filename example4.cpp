#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x1,x2,delta;
	printf("nhap a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	delta = b*b-(4*a*c);
	x1= (float)(-b + sqrt(delta))/(2*a);
	x2= (float)(-b - sqrt(delta))/(2*a);
	if(a!=0 && delta >0){
		printf("PT co 2 nghiem phan biet :");
		printf("\nx1=%f",x1);
		printf("\nx2=%f",x2);
	}else if(a!=0 && delta ==0){
		printf("\nPT co nghiem x1=x2=%f ",x1);
	} else printf("\nPT vo nghiem!");
}
