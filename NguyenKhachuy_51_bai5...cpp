#include<stdio.h>
int USCLN (int a,int b){
	if(b==0){            
		return a;
	} else 
	return USCLN(b,a%b);
}
int main(){
	int a,b;
	printf("nhap a,b: ");
	scanf("%d%d",&a,&b);
	printf("KQ= %d",USCLN(a,b));
}
