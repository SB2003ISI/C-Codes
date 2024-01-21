/*Checking an integer is a palindrome number or not*/
#include<stdio.h>
main()
{
	int n,r,revnum=0;
	printf("Enter a Postive Integer:	");
	scanf("%d",&n);
	for(r=n;r>0;r/=10)
	revnum=revnum*10+(r%10);	/*Reversing the Number using For Loop*/
	(n==revnum?printf("Palindrome Number"):printf("Not a Palindrome Number"));
}
