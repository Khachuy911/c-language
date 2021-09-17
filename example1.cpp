#include<stdio.h>
#include<conio.h>
int main(){
	char luaChon;
	printf("nhap ki tu: ");
	luaChon = getchar();
	switch (luaChon){
		case 'o' : {
			printf("\nnguyen am o");
			break;
    }
		case 'O' : {
			printf("\nnguyen am O");
			break;
	}
	    case 'u' : {
			printf("\nnguyen am u");
			break;
    }
        case 'U' : {
			printf("\nnguyen am U");
			break;
    }
        case 'e' : {
			printf("\nnguyen am e");
			break;
    }
        case 'E' : {
			printf("\nnguyen am E");
			break;
    }   
	     case 'i' : {
			printf("\nnguyen am i");
			break;
    }   
        case 'I' : {
			printf("\nnguyen am I");
			break;
    }
        case 'a' : {
			printf("\nnguyen am a");
			break;
    }
         case 'A' : {
			printf("\nnguyen am A");
			break;
    }
    default : printf("khong hop le!");
    return 0 ;
}
}
