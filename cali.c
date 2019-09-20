#include <stdio.h>
int main()
{
char Operator;
int num1, num2, result = 0;
printf("\n  Enter an Operator :  ");
scanf("%c", &Operator);
printf("\n Please Enter the Values for two Operands: ");
scanf("%d %d", &num1, &num2);
switch(Operator)
{
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
result = num1 / num2;
break;
default:
printf("\n You have enetered an Invalid Operator ");
}
printf("\n The result of %d %c %d  = %d", num1, Operator, num2, result);
return 0;
}
