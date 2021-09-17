#include<stdio.h>
int main(){
	int a,sum,sum1,sum2;
	printf("nhap so dien =",a);
	scanf("%d",&a);
	if(a<50){
		printf("so tien dien la 1000/1 so");
		sum=1000*a;	
		printf("\nvay so tien can dong la:%d",sum);
	}else if(a>49 && a<100){
		printf("so tien dien la 1500/1 so");
		sum1=1500*a;
		printf("\nvay so tien can dong la:%d",sum1);
	}else if(a>99){
		printf("so tien dien la 2000/1 so");
		sum2=a*2000;
		printf("\nvay so tien can dong la:%d",sum2);
		
	}
	return 0 ;
}
