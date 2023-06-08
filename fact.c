#include<stdio.h>
fact(int n)
{
	int factorial;
	if(n<=0)
	{
		return 1;
	}
	else
	{
		factorial=n*fact(n-1);
	}
	return factorial;
}

main()
{
	int n,ans;
	printf("enter value=");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial =%d",ans);
}
