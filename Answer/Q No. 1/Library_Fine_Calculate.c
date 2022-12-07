//Library Fine Calculation Programme//
#include<stdio.h>
main()
{
	int x;
	double y=0, z;
	printf("Enter The No. of Days You Are Late: ");
	scanf("%d",&x);
	if ((x>0)&&(x<=5))
	{
		y = (.50*x);
	}
	else if ((x>5)&&(x<=10))
	{
		y = (1*x);
	}
	else if ((x>10)&&(x<=30))
	{
		y = 2*x;
	}
	else if (x>30)
	{
		printf ("\nYour Membership is cancelled.");
	}
	else
	{
		printf("\nWrong Input.");
	}
	if(x>0 && x<=30){
	printf ("\nYour Fine is %lf Rs.",y );
	}
}
