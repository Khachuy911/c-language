#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x,P=1;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for( int i=1;i<=n;i++){
		P+=pow((-1),i)*((float)pow(x,n)/n);
	}
	cout<<"Vay gia tri P la: "<<P;
	}
