#include<stdio.h>
int main(){
char a,b,c;
int quantity1,price1,amount1,quantity2,price2,amount2,quantity3,price3,amount3;
double total;

printf("Enter the items");
printf("\nenter the first item: ");
scanf(" %c",&a);
printf("\nenter the price: ");
scanf(" %d",&price1);
printf("\nenter the quantity: ");
scanf(" %d",&quantity1);

printf("\nenter the second item: ");
scanf(" %c",&b);
printf("\nenter the price: ");
scanf(" %d",&price2);
printf("\nenter the quantity: ");
scanf(" %d",&quantity2);

printf("\nenter the third item: ");
scanf(" %c",&c);
printf("\nenter the price: ");
scanf(" %d",&price3);
printf("\nenter the quantity: ");
scanf(" %d",&quantity3);

amount1=quantity1*price1;
amount2=quantity2*price2;
amount3=quantity3*price3;
total=amount1+amount2+amount3;

printf("\n%.2f",total);






return 0;
}
