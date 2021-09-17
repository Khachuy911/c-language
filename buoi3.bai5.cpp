#include<stdio.h>
#include<math.h>
int main (){
	int luaChon;	
	printf("=======MENU=======");
	printf("\a\n1.Tinh chu vi ,Dien tich hinh tron.\n2.Tinh dien tich tam giac.\n3.Tinh tong tu 1 den n. \n4.Tinh tong tu m den n.");
	printf ("\nLua chon cua ban la:");
	scanf("%d",&luaChon);
	if(luaChon<=4){
	//	while(luaChon<=4){
		switch(luaChon){
			case 1 :{
		        int r;
			    float sum,sum1 ;
				printf ("\aNhap ban kinh de tinh dien tich va chu vi cua hinh tron\nNhap r=");
				scanf ("%d",&r);
				sum = 3.14*pow(r,2);
				sum1 = 4*3.14*r;
				printf("Dien tich hinh tron la: %f",sum);
				printf("\nChu vi hinh tron la: %f",sum1);
					break;
			}
			case 2 :{
				float a,b,c;
				float p,s;
				printf("\aTinh dien tich tam giac");
				printf("\nNhap a,b,c:");
				scanf("%f %f %f",&a,&b,&c);
				p=(a+b+c)/2;
				s=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("Dien tich tam giac la:%f",s);
				break;
			}
			case 3 :{
				int n,sum=0;
				printf("\aTinh tong tu 1 den n");
				printf("\nNhap n:");
				scanf("%d",&n);
				for(int i=1;i<=n;i++){
					sum+=i;	
				}
				printf("Gia tri tu 1 den n la: %d",sum);
				break;
			}
			case 4 :{
				int m,n,sum=0;
				printf("\aTinh tong tu m den n");
				printf("\nNhap m:");
				scanf("%d",&m);
				printf("Nhap n:");
				scanf("%d",&n);
				if(m<n){
			    for(int i=m;i<=n;i++){
			    	sum+=i;
				}
				printf("Gia tri tu m den n la: %d",sum);
			}else 
			printf("Ban Da Nhap Sai");
				break;
			}
		
	}
}
else 
printf ("MOI BAN NHAP LAI LUA CHON");
	return 0 ;
}


