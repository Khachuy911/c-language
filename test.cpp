#include<stdio.h>
#include<math.h>
#include <conio.h>

int main()
{
	void inso(int n);
	void tongchan(int n);
	
   int  m ; 
   printf (" nhap so m :  ");
   scanf ("%d",&m);
   inso(m);
   tongchan(m);
   
   return 0;
}
  void inso (int n)
  {  
    int i;
    for ( i=0 ; i<=n  ; i++)
   	printf (" %d ", i);
   	printf (" day so tu nhien la :");
	}
  void tongchan (int n)   
   {
   	int tc=0 ;
   	int i ;
   	int dem=0 ;
   	for ( i=0 ;i<=n ; i++)
   	{
   	    if (i%2==0){
        tc+=i ;
        dem ++ ;}
    }
    printf (" so thu tu &d ",dem);
    printf ( "tong chan  la %d: ",tc);
}

   
