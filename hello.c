#include <stdio.h>

int main(){
int number,total,rs_500,rs_200,rs_100,rs_50,rs_20,rs_10,rs_5,rs_2,rs_1,x,y,z,greater;
char a,b,c;
printf("\nEnter any three character and see their ASCII code values: ");
scanf(" %c %c %c",&a,&b,&c);
printf("\nThe ASCII value of %c is %d\nThe ASCII value of %c is %d\nThe ASCII value of %c is %d",a,a,b,b,c,c);


	printf("\nEnter any 3 Uppercase letters and see their equivalent Lowercase letter");
		printf("\nEnter the first Uppercase letter: ");
		scanf(" %c",&a);
		printf("\nEnter the second Uppercase letter: ");
                scanf(" %c",&b);
		printf("\nEnter the theird Uppercase letter: ");
                scanf(" %c",&c);
	printf("\nThe Lowercase of %c is %c\nThe Lowercase of %c is %c\nThe Lowercase of %c is %c",a,a+32,b,b+32,c,c+32);

        printf("\nEnter any 3 Lowercase letters and see their equivalent Uppercase letters");
                printf("\nEnter the first Lowercase letter: ");
                scanf(" %c",&a);
                printf("\nEnter the second Lowercase letter: ");
                scanf(" %c",&b);
                printf("\nEnter the theird Lowercase letter: ");
                scanf(" %c",&c);
        printf("\nThe Uppercase of %c is %c\nThe Uppercase of %c is %c\nThe Uppercase of %c is %c",a,a-32,b,b-32,c,c-32);

	printf("\nEnter any integer to check if it's an even number or an odd number: ");
		scanf(" %d",&number);
	printf("\n%d is %s",number,(number%2==0)?" an even number" :" an odd number");

//Write a program to calculate the total amount in a piggybank, when the coins are of
//denominations Rs 500,Rs 200,Rs 100,Rs 50,Rs 20,Rs 10, Rs 5, Rs 2 and Rs 1

printf("\nDo you wanna know how much you have in you piggybank ?");
printf("\nHow many currrency of 500₹ do you have: ");
scanf(" %d",&rs_500);
printf("\nHow many currrency of 200₹ do you have: ");
scanf(" %d",&rs_200);
printf("\nHow many currrency of 100₹ do you have: ");
scanf(" %d",&rs_100);
printf("\nHow many currrency of 50₹ do you have: ");
scanf(" %d",&rs_50);
printf("\nHow many currrency or coins of 20₹ do you have: ");
scanf(" %d",&rs_20);
printf("\nHow many currrency or/and coins of 10₹ do you have: ");
scanf(" %d",&rs_10);
printf("\nHow many coins of 5₹ do you have: ");
scanf(" %d",&rs_5);
printf("\nHow many coins of 2₹ do you have: ");
scanf(" %d",&rs_2);
printf("\nHow many coins of 1₹ do you have: ");
scanf(" %d",&rs_1);

total=rs_500*500+rs_200*200+rs_100*100+rs_50*50+rs_20*20+rs_10*10+rs_5*5+rs_2*2+rs_1;
printf("You have %d in your piggyBank",total);


//the greatest number between two numbers

printf("\nenter the first integer: ");
scanf(" %d",&x);
printf("\nenter the second integer: ");
scanf(" %d",&y);
printf("%d is greater than %d",(x>y)?x:y, (x>y)?y:x);



printf("\nenter the first integer: ");
scanf(" %d",&x);
printf("\nenter the second integer: ");
scanf(" %d",&y);
printf("\nenter the third integer: ");
scanf(" %d",&z);
greater = ((x>y)?x:y) > z ? ((x>y)?x:y) : z;
printf("\nthe greatest is %d ",greater);






return 0;
}
