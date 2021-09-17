#include<stdio.h>
#include<math.h>
int main (){
	int n;
	float s=0,k=0;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n%2==0){
		for(int i=1;i<=n;i++){
			s=s+(float)1/i;
		}
		printf("\n%f",s);
	}else
	 {
	 	k=sqrt(n-1);
	 	printf("\n%f",k);
		
	}
	return 0 ;
}
