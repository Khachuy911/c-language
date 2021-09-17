#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z,c,s,p;
	printf("nhap vao 3 do dai tam giac: ");
	scanf("%f%f%f",&x,&y,&z);
	p = (float)(x+y+z)/2;
    s = sqrt(p*(p-x)*(p-y)*(p-z));
    printf("Dien tich tam giac la:%f",s);
	c=x+y+z;
	printf("\nchu vi la:%f",c);
	return 0 ;
}

