#include<stdio.h>
int main(){
	int s;
	printf("BANG CUU CHUONG");
	for(int i=2;i<=10;i++){
		printf("\n*****************");
		for(int j=1;j<=10;j++){
			s=i*j;
			printf("\n%d * %d = %d\n",i,j,s);
		}
	}
}
