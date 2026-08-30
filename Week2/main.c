#include <stdio.h>
int main(){
//Declare variable
double expenses=0;
double revenue=0;
double balance=0;

int departments=0;
double payroll=0;
double procurement=0;
double assets=0;

// Display welcoming massage
printf("MUNICIPAL BUDGET CALCULATOR");
printf("---------------------------\n");
//Prompt user for revenue
printf("Enter total revenue: ");
scanf("%lf", &revenue);
//Prompt for expense
printf("Enter total expenses: ");
scanf("%lf", &expenses);
//calculatin balance
balance = revenue - expenses;
//Display the entered information as well as the balance
printf("\nRevenue: %.2f\n", revenue); 
printf("Expenses: %.2f\n", expenses);
printf("Balance: %.2f\n",balance);
//Prompt user for number of departments
printf("\nEnter number of departments:");
scanf("%d",&departments);
//  Prompt user for payroll
printf("Enter total payroll: ");
scanf("%lf", &payroll);
//Prompt user for procurement
printf("Enter total procurement: ");
scanf("%lf", &procurement);
//Prompt user for assets
printf("Enter total assets: ");
scanf("%lf", &assets);
//Display MUNICIPAL financial information
printf("MUNICIPAL FINANCIAL SUMMARY\n"); 
printf("----------------------------\n"); 
printf("Departments: %d\n", departments);
printf("Payroll: %.2f\n", payroll);
printf("Procurement: %.2f\n", procurement);
printf("Assets: %.2f\n", assets);
return 0;
}