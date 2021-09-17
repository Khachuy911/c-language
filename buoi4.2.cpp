#include<stdio.h>
#include<math.h>
int main (){
	int n;
	long long sum=1;
	printf("nhap n:");
	scanf("%d",&n);
for (int i=1;i<=n;i++){
	if(n>0){
		sum=sum*i;
	}else
	printf("nhap lai n");
	
	
}
	printf("%d!=%lld",n,sum);
return 0;
}
