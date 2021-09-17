#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x;
	float P=1;
	cout<<" tinh gia tri bieu thuc P=(x+1/1^2)x(x^2+1/1^2)x.....x(x^n+1/n^2)";
	cout<<"\n nhap n: ";
	cin>>n;
	cout<<" nhap x: ";
	cin>>x;
	for(int i=1;i<=n;i++){
		P*=(pow(x,i))+(float)1/pow(i,2);
	}
	cout<<"\a vay P = "<<P;
}
