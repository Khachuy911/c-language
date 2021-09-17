#include<stdio.h>
int main(){
	int n ;
	printf("1. 20/1-18/2\n2. 19/2-20/3\n3. 21/3-19/4\n4. 20/4-20/5\n5. 21/5-21/6\n6. 22/6-22/7\n7. 23/7-22/8\n8. 23/8-22/9\n9. 23/9-23/10\n10. 24/10-22/11\n11. 23/11-21/12\n12. 22/12-19/1 ");
	printf("\n=========(*.*)=========");
	printf("\nchon khoang ngay thang nam sinh cua ban de biet cung hoang dao cua minh (^.^):  ");
	scanf("%d",&n);
	switch(n){
		case 1:{ 
		    printf("bao binh");
		break ; 
		}
		case 2:{
	     	printf("song ngu");
	    break ;
		 }
	    case 3:{
	    	printf("bach duong");
			break;
		}
		 case 4:{
	    	printf("kim nguu");
			break;
	    }
	     case 5:{
	    	printf("song tu");
			break;
	    }
	    case 6:{
	    	printf("cu giai");
			break;
	    }
	    case 7:{
	    	printf("su tu");
			break;
	    }
	    case 8:{
	    	printf("xu nu");
			break;
	    }
	    case 9:{
	    	printf("thien binh");
			break;
	    }
	    case 10:{
	    	printf("thien yet");
			break;
	    }
	    case 11:{
	    	printf("nhan ma");
			break;
	    }
	    case 12:{
	    	printf("ma ket");
			break;
	    }
	    default :
	    printf("xin loi khong hop le");
	   
	}
	return 0 ;

}
