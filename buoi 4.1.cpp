#include<stdio.h>
#include<math.h>
int main (){
	int a,b=1;
	printf ("nhap a :");
	scanf ("%d",&a);
for (int i=1;i<=sqrt(a);i++){
	if (i>=0){
		b= pow(i,2);
		printf("\n%d",b);
	}else 
	printf("nhap lai a");
}
return 0;
}
