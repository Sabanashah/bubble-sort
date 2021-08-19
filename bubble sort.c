#include<stdio.h>
void main()
{
	int i,j,a[5],n,temp;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
