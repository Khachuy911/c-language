#include<stdio.h>
#include<math.h>
int main(){
	float r,c,s;
	printf("nhap r:");
	scanf("%f",&r);
	s=M_PI*pow(r,2);
	c=2*r*M_PI;
	printf("dien tich: %f",s);
	printf("\nchu vi :%f",c);
	return 0 ;
}
