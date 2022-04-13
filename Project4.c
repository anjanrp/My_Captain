#include<stdio.h>
int main()
{
    int a;
    printf("Please enter a number to chose what you eat and to know the price of the item");
    scanf("%d",&a);
    switch(a)
    {

    
        case(1): printf("Your Item-Biriyani \nCost-Rs 239");
            break;

        case(2): printf("Your Item-Chicken-Wings\nCost-Rs 129");
            break;

        case(3): printf("Your Item-Hot-Dog \nCost-Rs 179");
            break;

        case(4): printf("Your Item-Curly Fries \nCost-Rs 99");
            break;

        case(5): printf("Your Item-Shwarma \nCost-Rs 149");
            break;

        default: printf("Please enter numbers between 1 to 5");

    } 
}
