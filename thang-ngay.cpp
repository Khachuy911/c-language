#include<stdio.h>
#include<windows.h>
int main (){
	int luaChon;
	printf("1.thang 1\n2.thang 2\n3.thang 3\n4.thang 4\n5.thang 5\n6.thang 6\n7.thang 7\n8.thang 8\n9.thang 9\n10.thang 10\n11.thang 11\n12.thang 12");
	printf("\nso ngay trong thang la:");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1 :{
			printf("31 ngay");
			break;
		}
			case 2 :{
			printf("28 ngay");
			break;
		}
			case 3 :{
			printf("29 ngay");
			break;
		}
			case 4 :{
			printf("30 ngay");
			break;
		}
			case 5 :{
			printf("31 ngay");
			break;
		}
			case 6 :{
			printf("28 ngay");
			break;
		}
			case 7 :{
			printf("31 ngay");
			break;
		}
			case 8 :{
			printf("30 ngay");
			break;
		}
			case 9 :{
			printf("30 ngay");
			break;
		}
			case 10 :{
			printf("31 ngay");
			break;
		}
			case 11 :{
			printf("29 ngay");
			break;
		}
			case 12 :{
			printf("31 ngay");
			break;
		}
	}
	system("pause");
	return 0;
	
	
}
