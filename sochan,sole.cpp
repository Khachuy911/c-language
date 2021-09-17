#include<stdio.h>
int main (){
	int tongSoChan=0 , tongSoLe=0 , a,sum;
	printf("Nhap a: ");
	scanf("%d",&a); // n = 10
	// 1 2 3 4 5 6 7 8 9 10
	for (int i = 1; i <= a; i++){
		if (i%2!=0){
			tongSoLe+=i;
		}else if (i%2==0){
	        tongSoChan+=i;
	    }
	}
	sum = tongSoLe - tongSoChan;
	printf ("%d",sum);
	return 0 ;
}
