#include<stdio.h>
#include<conio.h>
int main (){
	char luaChon;
	printf("a.huy\nb.hanh\nc.van\n");
	scanf("%c",&luaChon);
	switch(luaChon){
		case 'a' :{ printf("HUY");
			break;
		}
		     
		case 'b' : printf("HANH");
		return 0 ;
	}
}
