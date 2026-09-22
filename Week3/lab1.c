#include <stdio.h>

int main(){
//declare variable
double salary=0.00;
double housingAllowance=0.00;
double transportAllowance=0.00;
double taxAmount;

double grossSalary=0.00;
double netSalary=0.00;

//prompt salary
printf("Enter the salary:");
scanf("%lf", &salary);
//prompt housing allowance
printf("Enter House allowance:");
scanf("%lf", &housingAllowance);
//prompt transport allowance
printf("Enter transport allowance:");
scanf("%lf", &transportAllowance);
// Ask user for tax amount
printf("Enter TAX amount:");
scanf("%lf", &taxAmount);
//calculate the gross
grossSalary = salary + housingAllowance +  transportAllowance;
//Display the gross
printf("\nGross Salary: %.2f\n", grossSalary);
//calculate the net 
netSalary = grossSalary - taxAmount;
//display the net
printf("Net Salary: %.2f\n", netSalary);
return 0;
}