#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int i=2;
	cout<<"nhap n: ";
	cin>>n;
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		count++	;
	}
	if(n>10){
	while(count>0){
		if(n%i==0){
		cout<<i<<"  ";
		n/=i;
	
	}else i++;
}
	if(count==0)
	cout<<" I LOVE YOU";

} else cout<<"nhap lai n (DK n>10)";
	return 0 ;
}
