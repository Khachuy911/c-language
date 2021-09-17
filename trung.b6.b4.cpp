#include<iostream>
#include<math.h>
using namespace std;
int GiaiThua (int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
}
int main(){
	int n,x;
	float A=1;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	for(int i=1;i<=n;i++){
		A+=(float)pow((-1),i)*(pow(x,i)+2)/GiaiThua(i);
	}
	cout<<"gia tri cua A la: "<<A;
	return 0 ;
}
