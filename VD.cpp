#include<stdio.h>
#include<math.h>
#define N 100
int SNT(int a){
   if(a==0 || a==1){
   	return false;
   }
   for(int i=2;i<=sqrt(a);i++){
   	if(a%i==0){
   		return false;
	   }
	   
   } return true;
}
int main(){
	int n,s=0;
	int arr[N];
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	for(int i=0;i<n;i++){
		if(SNT(arr[i])){
			s+=arr[i];
			printf("\n%d",arr[i]);
		}
		
	}printf("\nKQ= %d",s);
	
}
