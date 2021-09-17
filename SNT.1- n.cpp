#include<iostream>
#include<math.h>
using namespace std;
bool Ktra(int n){
	if(n==0 || n==1){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
		}
		return true;
	 
}
int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	for(int i =2;i<=n;i++){
		if(Ktra(i)){
			cout<<i<<"\t";
		}
	}
	return 0 ;
}
