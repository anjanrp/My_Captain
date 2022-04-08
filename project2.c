#include<stdio.h>
int main()
{
    
int a=99, b=87;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=186 (99+87)    
b=a-b;//b=99(186-87)    
a=a-b;//a=87 (186-99)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
 
}
