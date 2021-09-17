#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==1 || n==2){
		return 1 ;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(fibonacci(i)){
			cout<<"so fibonacci thu "<< i <<" la : "<<fibonacci(i)<<"\n";
		}
	}
			
		}
	

