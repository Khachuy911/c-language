#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	printf(" suc sac ra 5 so: ");
	srand(time(NULL));
	for(i=0;i<5;i++){
	int random=1+rand()%10;
	printf("%5d",random);
	}
	return 0 ;
}
juy
