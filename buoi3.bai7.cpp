#include<stdio.h>
#include<math.h>
int main (){
	int n,count;
	printf("nhap n:");
	scanf("%d",&n);
for (int i=1;i<=n;i++){
	if(i%2==1)
	count++;
}
if(count==0){
	printf("yes");
}else 
printf("no");
return 0;
}
