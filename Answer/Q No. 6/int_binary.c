#include<stdio.h>
int main()
{
    int n,r,a[10],i=0;
    printf("Enter The Integer value:");
	scanf("%d",&n);
    if (n==0)
    {
        printf("0");
    }
    else
    {
        while (n){
            r =n%2;
            n=n/2;
            a[i] =r;
            i++;
        }
        for (int x=i-1; x >=0; x--)
        {
            printf("%d",a[x]);
        }
    }
    return 0;
}
