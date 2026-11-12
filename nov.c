#include <stdio.h>
int main()
{
 int count,digit;
 int power,i;
 int sum = 0;

 printf(" enter any number: ");
 scanf(" %d",&number);


 temp = number;
 original = number;
 // to find the number of digit
 do
  {
   temp /= 10;
   count++;
  }
  while( temp > 0 );

  // to take each digit independently
  temp = number;

  while( temp > 0 )
  {
    digit = temp % 10;
    power = 1;
    //to find the power of each digit
    for( i = 1; i <= count; i++ )
    {
      power = power*digit;
    }
    sum = sum + power;
    temp /=10;
  }

  if( sum == original)
  {
    printf("\n %d is equal to %d, then yes , is an armstrong number",sum,original);
  }
  else
  {
    printf("\n %d is different to %d, then no , is not an armstrong number",sum,original);
  }





  return 0;
}
