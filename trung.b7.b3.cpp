#include<iostream>
using namespace std;
bool Ktra(int n){
	while(n>0){
	if(n%10!=4 && n%10!=7){
		return false;
		}n/=10;
   
}     return true;
}

int main(){
	int v,count=0;
	cout<<"nhap v: ";
	cin>>v;
    for(int i=4;i<=100000;i++){
    	if(Ktra(i)){
    		if(i%v==0){
    			count++;
			}
		}
	}
	if(count>0){
		cout<<"Yes";
	}else cout<<"No";	
	return 0;
}
