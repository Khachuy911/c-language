#include<stdio.h>
int main (){
	int n ,y=0;
	printf("nhap n:");
	scanf ("%d",&n);
	for( int i=1;i<=n;i++){
		y+=1/i;
	}
	printf("%d",y);
	return 0 ;
}
