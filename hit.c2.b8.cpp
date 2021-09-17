#include<stdio.h>
#include<math.h>
bool snt(){
	
}
int main(){
	int n,dem=0;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++){
	     if(n%i==0){
	     	dem++;
		 }
	}
	if(dem==0){
		for(int i=2;i<=n;i++){
			if(i%2!=0){
				printf("\t%d",i);
			}
		}
	}
	return 0 ;

}
