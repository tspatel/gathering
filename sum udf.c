#include<stdio.h>
sum(int a[])
{
	int i,n,sum=0;
	printf("enter the element =");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of all elements =%d",sum);
}
main()
{
	int a[100];
	sum(a);
}
