#include<stdio.h>
void perfectNumber(int a){
	int tong = 0;
	for(int i=1;i<a;i++){
		if(a%i==0)
			tong+=i;
	}
	if(tong==a){
		printf("so hoan hao !");
	} else printf("khong phai so hoan hao");
}
int main (){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	perfectNumber(n);
}
// bai nay phai la uoc thuc su , vi 1 so co the chia het cho chinh no len tong se khong bang chinh no @@.
