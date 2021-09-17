#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n,p=1,v,q=1,s=1;
	float T;
	cout<<"nhap m: ";
	cin>>m;
	cout<<"nhap n:";
	cin>>n;
	v=m+n;
	for(int i=1;i<=n;i++){
		p*=i;
		}
	for(int j=1;j<=m;j++){
		q*=j;
	}
	for(int k=1;k<=v;k++){
		s*=k;
		}
	T=(float)(p+q)/s;
	cout<<"vay T= "<<T;
	}
