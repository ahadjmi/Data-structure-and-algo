#include<stdio.h>
#include<conio.h>

main()
{
	int a[10],i,n,j;
	
	printf("Enter no of Elements:\n");
	scanf("%d",&n);
	
	printf("Enter elements of the Array\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	int sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("Sum of the Array: %d",sum);
	
}
