#include<stdio.h>
int main(){

int luaChon;
printf ("con meo co may chan:");
printf ("\nA.1\nB.2\nC.3\nD.4\nLua chon cua ban la(a,b,c,d):");
luaChon = getchar ();
switch(luaChon){
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'c':
    case 'C':{
    	
    	printf ("\nsory,lua chon cua ban da sai");
		break;
	}
    case 'D':
    case 'd':{
    	printf("\n\ayess,lua chon cua ban da dung");
		break;
		
	}
	default:
		printf("\nkhong co kq do");
		break;
	
	return 0;
}
}
