#include<stdio.h>
#include<string.h>
void cach(char hoTen[]){
	for(int i=1;i<strlen(hoTen);i++){
		printf("%c ",hoTen[i]);
	}
}
int main(){
	char hoTen[10000];
	printf("nhap ho va ten: ");
	gets(hoTen);
		for(int i=1;i<strlen(hoTen);i++){
		printf("%c ",hoTen[i]);
	}
}
