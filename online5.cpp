#include<stdio.h>
int main(){
	int ga,cho;
	for(ga=1;ga<35;ga++){
		for(cho=1;cho<35;cho++){
			if(ga*2 + cho*4 ==100 && cho + ga==36 ){
				printf("co %d cho ",cho);
				printf("\n co %d ga",ga);
			}
		}
	}
}
