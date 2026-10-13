#include <stdio.h>
#include <math.h>
int main(){
int usd_100,usd_50,usd_20,usd_10,usd_5,usd_1,amount;
int n1,n2,n3,n4,n5,n6,n7,n8,n9,number,sum,numberx;
double d,x1,x2,d2;
int a,b,c;
printf("\nEnter your amount: ");
scanf(" %d",&amount);
usd_100=amount/100;
amount=amount%100;
usd_50=amount/50;
amount=amount%50;
usd_20=amount/20;
amount=amount%20;
usd_10=amount/10;
amount=amount%10;
usd_5=amount/5;
amount=amount%5;
usd_1=amount;
printf("\n\tyou will get %d $100 bills, %d $50 bills, %d $20 bills, %d $10 bills, %d $5 bills, %d $1 bills ",usd_100,usd_50,usd_20,usd_10,usd_5,usd_1);
//printf("\n%c",usd_100);


//next step, write the result a string (ex. you will get ten $100 bills

//sum number's digits
printf("\nEnter any number and see the sum of its digits: ");
scanf(" %d",&number);
numberx=number;
n1=number%10;
number=number/10;
n2=number%10;
number=number/10;
n3=number%10;
number=number/10;
n4=number%10;
number=number/10;
n5=number%10;
number=number/10;
n6=number%10;
number=number/10;
n7=number%10;
number=number/10;
n8=number%10;
number=number/10;
n9=number%10;
number=number/10;

sum = n1+n2+n3+n4+n5+n6+n7+n8+n9;
printf("\n\nThe sum of digits of %d = %d ",numberx,sum);

//Entering a three digit number and print a new one by adding 1 to each digit

printf("\nEnter a three digit number: ");
scanf(" %d",&number);
n1=number%10;
number=number/10;
n2=number%10;
number=number/10;
n3=number%10;

printf("is the result is %d%d%d",n3+1,n2+1,n1+1);

//finding roots of a quadratic equation
printf("\nenter the value of A: ");
scanf(" %d",&a);
printf("\nenter the value of B: ");
scanf(" %d",&b);
printf("\nenter the value of C: ");
scanf(" %d",&c);



d=pow(b, 2.0)-(4*a*c);
d2=sqrt(d);
x1=-b+d2/(2*a);
x2=-b-d2/(2*a);
printf("\n Delta is %.f and the root of Delta is %.f",d,d2);
printf("\nX1= %.f",x1);
printf("\nX2= %.f",x2);
//to be improve

return 0;
}
