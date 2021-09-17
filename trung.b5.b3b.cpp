#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x,Q=1,p=1;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=1;i<=n;i++){
		Q+=(float)(pow(x,i)+(2*i))/(p*=i);
	}
	cout<<"gia tri Q la: "<<Q;
}
