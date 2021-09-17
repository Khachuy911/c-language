#include<stdio.h>
int main (){
	int n,count=0;
	printf("nhap n:");
	scanf("%d",&n);
for (int i=1;i<=n;i++){
	if(n%i==0)
		count+=i;
	}
	if(count==2*n){
		printf("YEAH");
	}else 
	    printf("HOO");
	 
return 0;
}
