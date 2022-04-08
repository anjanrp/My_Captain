#include<stdio.h>
int main()
{
    
int a=99, b=87;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=186 (10+20)    
b=a-b;//b=99(30-20)    
a=a-b;//a=87 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
 
}
