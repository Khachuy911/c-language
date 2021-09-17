#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n :";
	cin>>n;
	if(n%2==0){
		cout<<"*"<<"\n";
		cout<<"*"<<"\n";
		cout<<"*"<<"\n";  
		cout<<"****"<<"\n";
	}else if(n%2!=0) {
	      cout<<"*   *"<<"\n";
	      cout<<"*   *"<<"\n";
	      cout<<"*****"<<"\n";
	      cout<<"*   *"<<"\n";
		  cout<<"*   *"<<"\n";
	}
	return 0 ; 
}
