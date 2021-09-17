#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"nhap abc:   ";
	cin>>a>>b>>c;
	if(a>b ){
		if(a>c||a==c){
			cout<<a;
		}else if(a<c){
			cout<<c;
		}
	}
	if(a<b){
		if(b>c ||b==c){
			cout<<b;
		}else if(b<c){
			cout<<c;
		}
	}
	if(a==b){
		if(a<c){
			cout<<c;
		}else if(a>c){
			cout<<a;
		}
	}
	return 0 ;	
	
}
