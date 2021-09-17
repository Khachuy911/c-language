#include<iostream>
using namespace std;
int Fibonacci(int n){
	if(n==1 || n==2)
		return 1;
	 return Fibonacci(n-2)+Fibonacci(n-1);
}
int main(){
	int n;
	cout<<"nhap so thang :";
	cin>>n;
	cout<<"vay la sau "<<n<<" thang thi so tho la: "<<Fibonacci(n)<<" cap";
	return 0 ;
}

