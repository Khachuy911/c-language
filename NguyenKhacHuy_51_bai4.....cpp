#include<stdio.h>
#include<math.h>
#define N 100
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
void Ghep(int arr[], int brr[], int crr[], int n){
    int i=n-1,j=n-1,x=0;
    while(i>=0 && j>=0){
    	if(arr[i]>=brr[j]){
    		crr[x]=arr[i];
    		x++;
    		i--;
		} else {
		 	crr[x]=brr[j];    //1 [2] [3] [6] [15] i=3,i=2,i=1,i=0
		 	x++;              //[2] [6] [8] [9] [10] j=3,j=2,j=1,j=0
		 	j--;
		 }
	}
	while(i>=0){
		crr[x]=arr[i];
		x++;
		i--;
	}
	while(j>=0){
		crr[x]=brr[j];
		x++;
		j--;
	}
}

int main(){
	int arr[N],brr[N],n,crr[N];
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap mang 1: ");
	nhap(arr,n);
	xuat(arr,n);
	printf("\nnhap mang 2: ");
	nhap(brr,n);
	xuat(brr,n);
	printf("\nsau khi ghep la: ");
	Ghep(arr,brr,crr,n);
	xuat(crr,2*n);
}
