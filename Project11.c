#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    double salary;
    int ph_no;
} Employee;
 
int main()
{
    //number of employees
    int n=20;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //Phone Number 
        printf("Phone Number : ");
        scanf("%d",&employees[i].ph_no);



        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("Phone Number \t: ");
        printf("%d \n",employees[i].ph_no);
 
        printf("\n");
    }
 
    return 0;
}
