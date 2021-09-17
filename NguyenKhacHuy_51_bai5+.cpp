#include<stdio.h>
#include<string.h>
void chuanHoa(char hoTen[]){
	for(int i=0; hoTen[i] !='\0'; i++){
		if(hoTen[i]>='A' && hoTen[i]<='Z') 
			hoTen[i]+=32;
	
		if(hoTen[i-1]== ' ' || i==0){	
			if(hoTen[i]>='a' && hoTen[i]<='z') 
				hoTen[i]-=32;
		}
	}
}
void xoaSo(char hoTen[]){
	for(int i=0; hoTen[i] !='\0';i++ ){
		while(hoTen[i]>='1' && hoTen[i]<='9'){
			for(int j=i;j<strlen(hoTen);j++){
				hoTen[j]=hoTen[j+1];
			}
		} 
	}
}
int main(){
	char hoTen[1000];
	printf("nhap ho va ten: ");
	gets(hoTen);
	chuanHoa(hoTen);
	xoaSo(hoTen);
	printf("%s",hoTen);
}
