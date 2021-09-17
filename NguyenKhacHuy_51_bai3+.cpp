#include<stdio.h>
#include<math.h>
#define N 100
void nhapXY(int n,int x[],int y[]){
	for(int i=0;i<=n;i++){
		printf("X[%d],Y[%d]= ",i,i);
		scanf("%d%d",&x[i],&y[i]);
	}
}
void maxY(int n,int x[],int y[]){
	int max=0,k;
	for(int i=0;i<=n;i++){
		if(y[i]>=max){
		max=y[i];
		k=i;
	}
	}
	printf("\nToa do diem cao nhat la: x[%d]=%d,y[%d]=%d",k,x[k],k,y[k]);
}
void tinh(int n,int x[],int y[]){
	float d,c=0;
	for(int i=0;i<=n;i++){
		d=(float)sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
	if(i==n){
		d=(float)sqrt(pow(x[n]-x[0],2)+pow(y[n]-y[0],2));
	}
	c+=d;
}
printf("\nchu vi la: %f",c);
}
int main(){
	int x[N],y[N],n;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<1 || n>50);
	nhapXY(n,x,y);
	maxY(n,x,y);
	tinh(n,x,y);
}
