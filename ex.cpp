#include<stdio.h>
int main(){
	int a = 100;
	int b = 50;
	int *prt ;
	prt = &a;
	printf("value= %d\n",*prt);
	prt = &b;
	printf("value= %d",*prt);
	return 0 ;
}
