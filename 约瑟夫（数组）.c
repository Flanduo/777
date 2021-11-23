#include<stdio.h>
int main()
{
    int i,n,x,count=0;
	scanf("%d",&n);
	int a[n];
	x=n;
	for(i=0;i<n;i++) a[i]=1;
	while(x>1)
	{
		int out=0;
		for(i=0;i<n;i++)
	    {
		if(a[i]!=0) count++;
		if(a[i]==0) continue;
		if(count%3==0)
		  {
			a[i]=0;
			out++;
		  }
	    }
	    x-=out;
	}	
	for(i=0;i<n;i++) 
	{
	if(a[i]==1) printf("%d ",i+1);
    }
	return 0;
} 
