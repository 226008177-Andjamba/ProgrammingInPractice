#include <stdio.h>
int main(){
//Practice Exercise1
printf("Municipal Financial Management System\n");
printf("Welcome to Windhoek Municipality\n");

//Practice Exercise2
char municipality[50];
char mayor[50];
int population;

printf("\nEnter Municipality Name: ");
scanf("%49s", municipality);

printf("\nEnter Mayor: ");
scanf("%49s", mayor);

printf("\nEnter Population: ");
scanf("%d", &population);

printf("\n---------------------------------\n");
printf("Municipality : %s\n", municipality);
printf("Mayor        : %s\n", mayor);
printf("Population   : %d\n", population);

return 0;
}