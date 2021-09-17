#include<stdio.h>
int tongChan(int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
		  sum+=i;	
		}
	}
	return sum;
int tongLe(int n){
}
	int sum1=0;
	for(int i=0;i<n;i++){
		if(i%2!=0){
		  sum1+=i;	
		}
	}
	//return sum1;
} 
void in(int n){
	for(int i=0;i<n;i++){
		printf("\t%d",i);
	}
}
int main(){
	int a;
	printf("nhap a: ");
	scanf("%d",&a);
	in(a);
	printf("\ntong chan la %d",tongChan(a));
	printf("\ntong le la %d",tongLe(a));
	return 0 ;
}
