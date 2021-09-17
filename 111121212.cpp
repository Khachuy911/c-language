#include<stdio.h>

int n, sum=0, uoc=0;

void soHoanHao(int k)
{
	int i, j;
	for (i = 1; i <= k; i++)   //k=18;
	{
		int k = i;
		while(k != 0)
		{
			sum += k%10;
			k/=10;
		}
		printf ("%d ", sum);
		for (j = 1; j <= sum; j++)
			if(uoc%j==0)	uoc++;
		if(uoc==3) printf("%d ", i);
	}
	
}

int main()
{
	scanf("%d", &n);
	soHoanHao(n);
	return 0;
}
