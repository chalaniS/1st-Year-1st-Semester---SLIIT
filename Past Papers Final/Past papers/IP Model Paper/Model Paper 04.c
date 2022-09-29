#include <stdio.h>
float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);
int main()
{
    int grade;
    float basic;
    float increment;
    float total;
    
    printf("Enter Grade :- ");
    scanf("%d", &grade);
    
    printf("Enter Basic Salary :- ");
    scanf("%f", &basic);
    
    increment = calculateIncrement(grade, basic);
    printf("Increment :- %.2f\n", increment);
    
    total = calcTotSalary(basic, increment);
     printf("Total Salary :- %.2f\n", total);
    
    return 0;
}
float calculateIncrement(int grade, float basicSalary)
{
    if(grade == 1)
    return 0.1 * basicSalary;
    
    else if (grade == 2)
    return 0.15 * basicSalary;
    
    else if (grade == 3)
    return 0.2 * basicSalary;
    
    
}
float calcTotSalary(float salary, float increment)
{
    return salary + increment;
}
