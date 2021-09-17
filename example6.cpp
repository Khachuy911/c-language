#include<stdio.h>
int main(){
	int a,r,b;
	printf("nhap a,b: ");
	scanf("%d%d",&a,&b);
    if(a>0 && b>0){
		while(a%b!=0){
			r=a%b;
			a=b;
			b=r;
		} printf("KQ= %d",b);
	}
	else if( b==0 && a>0){
		printf("KQ=%d",a);
	} else if(a==0 && b>0){
		printf("KQ=%d",b);
	}else printf("Khong co USCLN!");
}
	

		

