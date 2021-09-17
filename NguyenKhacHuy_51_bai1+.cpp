#include<stdio.h>
#include<string.h>
int main(){
	char name[100],age[100],music[100];
	printf("nhap ten crush: ");
	gets(name);
	printf("nhap tuoi: ");
	gets(age);
	printf("nhap bai hat yeu thich: ");
	gets(music);
	printf("********THONG TIN CRUSH********");
	printf("\nTen: %s",name);
	printf("\nTuoi: %s ",age);
	printf("\nBai hat yeu thich: %s",music);
}
