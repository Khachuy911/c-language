#include<iostream>
using namespace std;
int main(){
	int a,b,s=1;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	for(int i=1;i<=b;i++){
		s*=a;
	}
	cout<<"gia tri la: "<<s;
}
