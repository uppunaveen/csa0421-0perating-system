#include<stdio.h>
int main()
{
	int n,bt[30],at[30],wt[30],ct[30],i;
	printf("enter the no of process::");
	scanf("%d",&n);
	
	printf("please enter the brust time ::");
	for(i=0;i<n;i++)
	{
		printf("p[%d]",i+1);
		scanf("%d",&bt[i]); 
	}
	
	printf("please enter the arival time ::");
	for(i=0;i<n;i++)
	{
		printf("p[%d]",i+1);
		scanf("%d",&at[i]); 
	}
	wt[0]=0;
	bt[0]=0;
	for(i=0;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i-1];
		ct[0]=at[0];
		wt[i]=ct[i]-at[i];
		printf("p[%d]",i+1);
		printf("%d",wt[i]); 
	}
}
