#include<stdio.h>
#include<math.h>
int mu(int x,int n){
    if( x==1 || n==0){
    	return 1;
	} else
	 return x*mu(x,n-1); 
}
int main(){
	int x,n;
	printf("Nhap x,n: ");
	scanf("%d%d",&x,&n);
	printf("KQ= %d",mu(x,n));
}
