#include<stdio.h>
int main(){
	int luaChon,n;
	printf("nhap vao thang: ");
	scanf("%d",&luaChon);
	switch(luaChon){
        case 1 :
		case 3 :
		case 7 :
		case 8 :
		case 5 :
		case 10:
		case 12: printf("thang %d co 31 ngay!",luaChon);break;
		case 4 :
		case 6 :
		case 9 :
		case 11: printf("thang %d co 30 ngay!",luaChon);break;
		case 2 :{
			printf("nhap nam: ");
			scanf("%d",&n);
			if(n%4==0) printf("thang 2 co 29 ngay!");
			else printf("thang 2 co 28 ngay!");
			break;
		}
	    default : printf("nhap lai!");	
	}
    return 0 ;	
}

