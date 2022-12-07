#include<stdio.h>
int main()
{
    int a=0,b=1,n,i=1,v=10;
    printf("\n%d\t%d",a,b);
    while(i<=v-2)
    {
        n=a+b;
        printf("\t%d",n);
        a=b;
        b=n;
        i++;
    }
    
    return 0;
}
