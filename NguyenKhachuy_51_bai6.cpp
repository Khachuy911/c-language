#include<stdio.h>
int main(){
	int a,s=1;
	printf("so tien dien la: ");
	scanf("%d",&a);
	if(a< 50) s= 1500 * a;
	if(a<100) s= 2500 * a;
	if(a<150) s= 3500 * a;
	if(a<200) s= 4000 * a;	
	if(a>=200)s= 5000 * a;
	printf("So tien dien la: %d",s);
	return 0 ;
}
