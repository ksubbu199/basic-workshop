#include <stdio.h>

int main()
{
	int fac,n,i;
	
	scanf("%d",&n);

	fac=1;
	i=1;

	while(fac<=n)
	{
		printf("%d ",fac);
		fac=fac*i;
		i++;
	}
	printf("\n");
}
