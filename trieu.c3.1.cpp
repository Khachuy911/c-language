#include<iostream>
using namespace std;
int main(){
	int c,h;
	cout<<"nhap c: ";
	cin>>c;
	cout<<"nhap h: ";
	cin>>h;
	for(int i=0;i<h;i++){
		cout<<"\n";
		for(int j=0;j<c;j++){
			cout<<" * ";
		}
	}
	return 0 ;
}
