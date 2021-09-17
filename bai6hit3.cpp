#include<stdio.h>
int uocSo(int a){
	int count=0,tong=0,i;
	while(a>0){
		i=a%10;
		tong+=i;
		a/=10;
	} 
	int x=tong;
	for(int i=1;i<=x;i++){
		if(x%i==0)
			count++;
	}
	if(count==3){
		return true;
	} else
	 return false;
}
int main(){
	int a;
	printf("nhap a: ");
	scanf("%d",&a);
	for(int i=1;i<a;i++){
		if(uocSo(i)){	
	    printf("\t%d",i);
	}
}
}
