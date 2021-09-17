#include<stdio.h>
int main (){
	int a,s ;
	scanf ("%d",&a);
    s= 4*(a^2);
	printf (" dien tich xung quanh la:%d=4*%d^2",s,a,pow(a,2));
	return 0;
}
