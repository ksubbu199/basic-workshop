#include<stdio.h>
#include<math.h>
int a[100000000];

int sieve(int n)
{
        int j=1;
	int s=(int)sqrt(n);
        for(int i=2;i<n;i++)
        {
		int div=n/i;
                for(int j=2;j<div;j++)
                {
                        a[i*j]=1;
                }
        }
}

int main()
{

	int n;
	scanf("%d",&n);
	sieve(n);

	for(int i=2;i<n;i++)
	{
		if(a[i]==0)
			printf("%d ",i);
	}
	printf("\n");

}

