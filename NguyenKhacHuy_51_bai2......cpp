#include<Stdio.h>
#include<math.h>
const int N = 100;
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
}
void sapXep(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int tmp =arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
			}
		}
	}
}
void chen(int arr[],int n,int x,int k){
	if(k>=0){
	for(int i=n-1;i>=k;i--){          
		arr[i+1]=arr[i];
	}
	arr[k]=x;
	n++;
	xuat(arr,n);
} else printf("Nhap k>=0");
}
int Max(int arr[],int n){
	int max=arr[0],mx;
	for(int i=0;i<n;i++){
		if(arr[i]>=max){
			max=arr[i];	
			mx=i;
		}
	}		return mx;
}
int Min(int arr[],int n){
	int min=arr[0],mn;
	for(int i=0;i<n;i++){
		if(arr[i]<=min){
			min=arr[i];	
			mn=i;
		}
	}		return mn;
}
void remove(int arr[],int n,int a,int b){
	for(int i=a;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for(int i=b;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	xuat(arr,n);
}
int main(){
	int arr[N],n,k,x;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	nhap(arr,n);
	xuat(arr,n);
//	printf("\nnhap vi tri k: ");
//	scanf("%d",&k);
//	printf("nhap phan tu x: ");
//	scanf("%d",&x);
//	chen(arr,n,x,k);
//	sapXep(arr,n);
//	printf("\nsau khi sx la: ");
//	xuat(arr,n);
//	printf("\nMAX= %d",Min(arr,n));
	printf("\n");
	remove(arr,n,Max(arr,n),Min(arr,n));
}
