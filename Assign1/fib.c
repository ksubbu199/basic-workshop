#include<stdio.h>

int main()
{
	int n,prev=0,next=1;
	scanf("%d",&n);
	while(next<=n)
	{
		printf("%d ",next);
		next=prev+next;
		prev=next;
		
	}
	printf("\n");
}
