#include<stdio.h>
#include<string.h>
void f(int k,char s[]);
int main()
{
	char s[100];
	scanf("%s",s);
	int i;
	f(strlen(s),s);
	printf("%s",s);
	return 0;
} 
void f(int k,char s[])
{
	int i,j;
	for(i=0,j=strlen(s)-1;i<=j;i++,j--)
	{
		char t;
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
}
