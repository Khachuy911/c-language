#include<iostream>
#include<math.h>
using namespace std;
int Ktra(int a,int b){
	if(b==0){
		return a;
	}else return Ktra(b,a%b);
}
int main(){
	int a,b,r;
	cout<<"nhap a,b: ";
	cin>>a>>b;
    /*while(a%b!=0){
    	r=a%b;
    	a=b;
    	b=r;
	}*/
	cout<<Ktra(a,b);
	//cout<<b;
	return 0 ;
}                                                           

