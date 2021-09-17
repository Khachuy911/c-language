#include<stdio.h>
int main(){
	float x;
	printf("nhap diem TB: ");
	scanf("%f",&x);
	if(x>=0 && x<=10){
		printf("Diem hop le");
		if(x>=5){
			printf("\nDuoc len lop");
		}else printf("\nNhung ban eo khong duoc len lop hehe");
	} else printf("Diem TB khong hop le !");
     return 0 ;
}
