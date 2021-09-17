#include<stdio.h>
#include<string.h>
void chen(char a[],char x,int k){
	for(int i=strlen(a);i>=k;i--){
		a[i+1]=a[i];
	} 
	  a[k]=x;
}
int main(){
	char a[1000],x;
	int k;
	gets(a);
	printf("%s",a);
	printf("nhap x: ");
	scanf("%s",&x);
	printf("\nnhap k: ");
	scanf("%d",&k);
	chen(a,x,k);
	printf("%s",a);
}
