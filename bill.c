#include <stdio.h>
int main()
{
int unit;
float amount,total,additionalcharge;
printf("Enter total units consumed: ");
scanf("%d", &unit);
if(unit <= 50)
{
amountt=unit*0.50;
}
else if(unit<=150)
{
amt=25+((unit-50)*0.75);
}
else if(unit<=250)
{
amt=100+((unit-150)*1.20);
}
else
{
amt=220+((unit-250)*1.50);
}
additionalcharge= amt * 0.20;
total= amt+additionalcharge;
printf("Electricity Bill=Rs.%.2f",total\n);
return 0;
}
