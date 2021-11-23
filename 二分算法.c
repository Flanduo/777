#include<stdio.h>
#include<math.h>
double f(double x);
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	while(b-a>1e-5)
	{
		if(f((b+a)/2)==0) break;
		else if(f(a)*f((b+a)/2)<0) b=(b+a)/2;
		else if(f(b)*f((b+a)/2)<0) a=(b+a)/2;
	}
	printf("%lf",(a+b)/2);
	return 0;
} 
double f(double x)
{
	return pow(x,3)-1;
}
