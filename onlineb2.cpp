#include<stdio.h>
int main(){
	for(int i=1;i<=20;i++){
		for(int j=1;j<=33;j++){
			for(int k=1;k<=100;k++){
		    if(i*5+j*3+k/3==100 && k%3==0 && i+j+k==100){
		    	printf("\ntrau dung la: %d  ",i);
		    	printf("\nrau nam la: %d ",j);
		    	printf("\ntrau gia la: %d",k);
		    	printf("\n");
			}
	}	
	}	
	}
}
