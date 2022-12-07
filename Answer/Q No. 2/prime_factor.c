#include<stdio.h>  

void factor(int);  
  
main() 
{  
    int num;  
  
    printf("Enter a positive integer number : ");  
    scanf("%d", &num);  
  
    printf("\nPrime Factors of %d is : \n", num);  
    factor(num); 
  
    return 0;  
}     
  

  //function factor//

void factor(int num)  
{  
    int div=2;  
  
    for(div; (num > 1); div++)  
    {  
        while(num % div == 0)  
        {  
            printf("%d\n", div);  
            num = num / div;  
        }  
    }  
    printf("\n");  
}
