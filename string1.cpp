#include<stdio.h>
#include<string.h>
int cach(char hoTen[]){
	for(int i=0;i<strlen(hoTen);i++){
		printf("%s  ",hoTen[i]);
	}
}
void xuat(char hoTen[]){
	for(int i=0;i<strlen(hoTen);i++){
		printf("%s",hoTen[i]);
	}
}
int main(){
	char hoTen[1000],tenLop[1000],diaChi[10000];
	printf("nhap ho va ten: ");
	gets(hoTen);
	cach(hoTen);
//	xuat(hoTen);
//	printf("nhap ten lop: ");
//	gets(tenLop);
//	printf("nhap dia chi: ");
//	gets(diaChi);
	
}
