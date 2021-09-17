#include<iostream>
#include<math.h>
#define N 100
using namespace std;
void nhap(int arr[],int &n){
	printf("nhap n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=1;i<=n;i++){
		printf("\t%d",arr[i]);
	}
}
bool Ktra(int n){
	    if(n==1) return false; 
		for(int j=2;j<=sqrt(n);j++){
			if(n%j==0 )
				return false;		
		} 
		 return true;
	}
int main(){
	int arr[N],n;
	nhap(arr,n);
	xuat(arr,n);
	printf("\nso nguyen to la: ");
	for(int i=1;i<=n;i++){
	   if(Ktra(arr[i])){
	   	printf("\t%d",arr[i]);
	   }
	}
	return 0 ;
}
