#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x,p=1;
	float Q=1;
	cout<<"tinh gia tri bieu thuc Q= 1+x/1!+x^2/2!+....+x^n/n! ";
	cout<<"\nnhap n: ";
	cin>>n;
	cout<<"nhap x:";
	cin>>x;
	for(int i=1;i<=n;i++){
	Q+=(float)pow(x,i)/(p*=i);
	
}
cout<<"vay Q= "<<Q;
}
