#include<stdio.h>
int main(){
	for(int a=1;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				if(a+b+c == a*a*a+b*b*b+c*c*c){
				printf("a= %d ",a);
				printf("b= %d ",b);
				printf("c= %d ",c);
				printf("\n");
			}
			}
		}
	}
}
