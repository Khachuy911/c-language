#include<stdio.h>

int main(){
	int m,n;
	float x,y;
	printf("nhap n,m: ");
	scanf("%d%d",&n,&m);
	printf("nhap x,y: ");
	scanf("%f%f",&x,&y);
	if(n>m){
		printf("co %d con cho!",n);
	}else printf("co %d con meo!",m);
	if(x>y){	
			printf("\nGau Gau %f lan",x);
		
	}else 
			printf("\nMeo Meo %f lan",y);
		
		return 0 ;
}
