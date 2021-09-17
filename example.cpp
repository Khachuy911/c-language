#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Nhap ki tu: ");
	ch=getche();
	if(ch=='a'||ch=='A'){
		printf("\nNguyen am a");
	} else if(ch=='u'||ch=='U'){
		printf("\nNguyen am u");
	} else if(ch=='e'||ch=='E'){
		printf("\nNguyen am e");
	}else if(ch=='o'||ch=='O'){
		printf("\nNguyen am o");
	}else if(ch=='i'||ch=='I'){
		printf("\nNguyen am i");
	}
	return 0 ;
}
