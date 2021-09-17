#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n; 
	cout<<"nhap n:";
	cin>>n;
	int count=0;
    for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			count++;		
}if(count==0){
	cout<<"la so nguyen to";
} else cout<<"khong phai so nguyen to";
return 0 ;
}
int main(){
	int n;
	cout<<"nhap n :";
	cin>>n;
	int i=2;
	while(n!=1){
		if(n%i==0){
			cout<<i;
			n/=i;
	}else i++;
	}
	return 0 ; 
	}
		

