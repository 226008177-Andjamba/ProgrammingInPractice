#include <stdio.h>

int main(){
//declare variable
char supplierName[50]; 
double price; 
double budget; 
int registered; 
int documentsComplete; 

//prompt supplier name
printf("Enter supplier name: "); 
scanf("%49s", supplierName); 
//prompt supplier price
printf("Enter supplier price: "); 
scanf("%lf", &price);
//prompt budget
printf("Enter  budget: "); 
scanf("%lf", &budget);
//prompt registration status
printf("Is supplier registered? (1=Yes, 0=No): "); 
scanf("%d", &registered); 
//prompt document complete
printf("Are all documents complete? (1=Yes, 0=No): "); 
scanf("%d", &documentsComplete);
//Evaluation :check registration and documents
if (registered == 0 || documentsComplete == 0) {
printf("\nSupplier: %s\n", supplierName);
printf("Status: Disqualified\n"); 
} 
//Evaluation : check budget
else if (price > budget) {
printf("\nSupplier: %s\n", supplierName); 
printf("Status: Disqualified\n"); 
} 
//Evaluation: qualified
else {
printf("\nSupplier: %s\n", supplierName); 
printf("Status: Qualified\n"); 
}
return 0;
}