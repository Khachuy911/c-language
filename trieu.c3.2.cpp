#include<stdio.h>
int main(){
	int h,c;
	printf("nhap c: ");
	scanf("%d",&c);
	printf("nhap h: ");
	scanf("%d",&h);
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++)
		if(i==0 || i==h-1 || j==0 || j==c-1 )
		 	printf(" * ");
		 	
			  else printf("   ");
			  printf("\n");
		 	
	}
	return 0 ;
	
}
