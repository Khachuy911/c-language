#include<stdio.h>
#include<string.h>
void chen(char chuoi[]){
	char c;
	printf("\nnhap 1 ki tu: ");
	scanf("%s",&c);
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]=='a'){
			for(int j=strlen(chuoi);j>i;j--){
				chuoi[j+1]=chuoi[j];
			}
			chuoi[i+1]=c;
		}
	}
	printf("%s",chuoi);
}
int main(){
	char chuoi[1000];
	printf("nhap chuoi: ");
	gets(chuoi);
	printf("chuoi la: %s",chuoi);
	chen(chuoi);
}


