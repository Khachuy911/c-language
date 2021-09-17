#include<stdio.h>
#include<math.h>
#include <windows.h>
int main (){
    float x,y;
	printf(" nhap gia tri cua x:");
	scanf("%f",&x);
if (2<x && x<3){
	y = 5*cos(3*x+2)-log(pow(x,2)+2);
}
else
 if(x>=3){
	y= pow(x+3,2);
}
else {
	y=1;
}
	printf("gia tri cua y:%f",y);
system ("pause");
return 0;
}
