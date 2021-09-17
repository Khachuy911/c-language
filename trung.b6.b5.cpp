#include<iostream>
#include<math.h>
using namespace std;
int GiaiThua(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua ;
}
int main(){
	int x,n;
	float S=1;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=0;i<=n;i++){
		S+=(float)pow(x,(2*i+1))/GiaiThua(2*i+1);
	}
	cout<<"gia tri cua S la: "<<S;
	return 0 ;
}
