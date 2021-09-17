#include<stdio.h>
#include<math.h>
#include<windows.h>
int main (){
	int a,b,x,y;
	float s ;
	printf("toa do A la:");
	scanf("%d%d",&a,&b);
	printf(" toa do B la:");
	scanf("%d%d",&x,&y);
	s=sqrt(pow(x-a,2)+pow(y-b,2));
	printf("khoang cach giua 2 diem A va B la:%f",s);
	system ("pause");
	return 0 ;
	
}
