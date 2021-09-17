#include<stdio.h>
int UCLN(int a,int b){
	while(a!=b){
	int UCLN;
	if(a>b)
	a-=b;
	else b-=a;
}
	return a;
}
int main (){
	int x,y;
	do{
	printf("nhap x,y: ");
	scanf("%d%d",&x,&y);
} while ( x<0 || y>100);
    printf("KQ= %d",UCLN(x,y));
	return 0 ;
}
