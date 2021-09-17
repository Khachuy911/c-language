#include<iostream>
using namespace std;
int kiemTraSoHoanHao(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
		s+=i;	
}
		if(s==n){
		    return 1;
		}else return 0;
}

int main(){
	int n;
	cin>>n;
	if(kiemTraSoHoanHao(n)){
		cout<<"true";
	}else cout<<"false";
}
	



