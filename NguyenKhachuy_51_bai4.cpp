#include<stdio.h>
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	if( 0<x && x<=12){
	    printf("Thang %d",x);
    }else printf("con so nay khang phai la 1 thang trong nam");
    return 0 ;
}
