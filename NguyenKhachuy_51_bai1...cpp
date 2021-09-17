#include<stdio.h>
#include<math.h>
void chinhPhuong(int a){
	int sqr = sqrt(a);
	if(sqr*sqr==a){
		printf("\t%d",a);
	} 
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	chinhPhuong(i);
}
}


