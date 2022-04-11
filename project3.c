#include<stdio.h>
int main()
{
    printf("Enter the marks : ");
    int marks=0;
    scanf("%d",&marks);
    if (marks<=100 && marks>=85)
        {
            printf("A Grade");
        
        }
    else if (marks <=84 && marks>=75)
        {
            printf("B Grade ");
        }
    else if (marks <=69 && marks>=55)
        {
            printf("C Grade");
        }
    else if (marks <=54 && marks>=40 )
        {
            printf("D Grade ");
        }
    else 
        {
            printf("F Grade ");
        }
}
