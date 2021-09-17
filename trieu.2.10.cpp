#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	int i=2;
	while(n!=1){
		if(n%i==0){
		
			cout<<i<<"\t";
			n/=i;
			}else i++;
	}
		return 0 ;
	
}
