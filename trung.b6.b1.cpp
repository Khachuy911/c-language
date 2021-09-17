#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	int tmp=a;
	    a=b;
	    b=tmp;
	cout<<"a="<<a<<"\nb="<<b;
}
