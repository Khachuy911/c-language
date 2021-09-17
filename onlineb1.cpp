#include<stdio.h>
int main(){
	int a,n,countc=0,countl=0;
	int tongChan=0,tongLe=0;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n>=5 && n<=20){
		printf("vay chung ta co %d so la: ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a%5==0 && a%2==0){
			countc++;
			tongChan+=a;
		} else
		if(a%3==0 && a%2!=0){
			countl++;
			tongLe+=a;
		}
	}
	printf("\nso chan chia het cho 5 la: %d so",countc);
	printf("\nso le chia het cho 3 la: %d so",countl);
	printf("\ntong so chan chia het cho 5 : %d",tongChan);
    printf("\ntong so le chia het cho 3 : %d",tongLe);
    printf("\nTBC so chan chia het cho 5 : %f",(float)tongChan/countc);
    printf("\nTBC so le chia het cho 3 : %f",(float)tongLe/countl);
    }
}
