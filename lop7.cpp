#include<stdio.h>
int main(){
	int p=5,q;
	p--;                    // p tru 1 gia tri 
	printf("p= %d",p); 
	q= ++p;                 // p cong 1 gia tri va gan cho q
	printf("\np= %d",p);
	printf("\nq= %d",q);
	q= p--;                 // gan p cho q truoc sau do p moi tru 1 gia tri
	printf("\np= %d",p);
	printf("\nq= %d",q);
	return 0 ;
}
