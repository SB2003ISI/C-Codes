#include<stdio.h>
#include<math.h>
main()
{
	int n=0;
	float x,r,rt;
	printf("Enter x: ");
	scanf("%f",&x);
	r=x/2;
	while(abs(pow(r,2)-x)>=0.000001)
	{
		r= (r+(x/r))/2;
		n=n+1;
	}
	printf("\nSquare Root of x : %f",r);
	printf("\nNo. of Iterations : %d",n);	
}
